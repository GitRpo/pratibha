#include <stdio.h>
void DTC_Process(float torque,float flow)
{
    if(torque<20) printf("DTC Torque Fault\n");
    if(flow<50) printf("DTC Flow Fault\n");
}
