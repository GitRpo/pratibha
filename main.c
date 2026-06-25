#include <stdio.h>
#include "common_types.h"

void VCU_Read(VCU_Signals_t*);
void Base_Process(VCU_Signals_t*,VCU_Signals_t*);
void PreCalc_Process(VCU_Signals_t*,PreCalc_t*);
void Derating_Process(PreCalc_t*,Derate_t*);
float Torque_Process(PreCalc_t*,Derate_t*);
float Flow_Process(PreCalc_t*,Derate_t*);
void DID_Process(float,float);
void DTC_Process(float,float);

int main()
{
    VCU_Signals_t vcu,base;
    PreCalc_t pre;
    Derate_t der;

    VCU_Read(&vcu);
    Base_Process(&vcu,&base);
    PreCalc_Process(&base,&pre);
    Derating_Process(&pre,&der);

    float torque = Torque_Process(&pre,&der);
    float flow = Flow_Process(&pre,&der);

    DID_Process(torque,flow);
    DTC_Process(torque,flow);

    printf("Torque=%.2f Flow=%.2f\n",torque,flow);
}
