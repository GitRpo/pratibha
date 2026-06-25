#include "common_types.h"
#define BASE_TORQUE 100.0f

float Torque_Process(PreCalc_t *in, Derate_t *d)
{
    float f = d->tempFactor * d->currentFactor * d->faultFactor;
    float t = BASE_TORQUE * f;
    return (t<10)?10:t;
}
