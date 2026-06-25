#include "common_types.h"
void VCU_Read(VCU_Signals_t *sig)
{
    sig->opMode = 1;
    sig->speed = 120.0f;
    sig->temp = 85.0f;
    sig->voltage = 24.0f;
    sig->current = 75.0f;
}
