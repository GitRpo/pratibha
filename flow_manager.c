#include "common_types.h"
#define MAX_FLOW 200.0f

float Flow_Process(PreCalc_t *in, Derate_t *d)
{
    float f = MAX_FLOW * d->flowFactor;
    return (f<20)?20:f;
}
