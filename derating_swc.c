#include "common_types.h"

static float temp_factor(float t){ return (t<70)?1:(t<90?0.7:0.4); }
static float curr_factor(float c){ return (c<50)?1:(c<80?0.7:0.4); }

static float flow_factor(float t,float c)
{
    float tf=temp_factor(t);
    float cf=curr_factor(c);
    return (tf<cf)?tf:cf;
}

void Derating_Process(PreCalc_t *in, Derate_t *out)
{
    out->tempFactor = temp_factor(in->temp_f);
    out->currentFactor = curr_factor(in->curr_f);
    out->flowFactor = flow_factor(in->temp_f,in->curr_f);
    out->faultFactor = 1.0f;
}
