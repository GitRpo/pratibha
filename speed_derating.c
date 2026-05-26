#include "speed_derating.h"
#include "operation_mode.h"
#include "speed_input.h"
#include "did.h"
#include "dtc.h"

void Process_SpeedDerating(void)
{
 float VehicleSpeed;
 float DeratedSpeed;
 OperationMode_t Mode;

 Mode=Get_OperationMode();
 VehicleSpeed=Get_VehicleSpeed();

 switch(Mode)
 {
 case NORMAL_MODE:
 DeratedSpeed=VehicleSpeed;
 break;

 case ECO_MODE:
 DeratedSpeed=VehicleSpeed*0.8f;
 break;

 case LIMP_MODE:
 DeratedSpeed=VehicleSpeed*0.5f;
 break;

 default:
 Set_DTC();
 return;
 }

 Update_DID(DeratedSpeed);
}
