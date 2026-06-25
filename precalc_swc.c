#include "common_types.h"

static float filter(float x)
{
    static float prev = 0;
    float alpha = 0.2f;
    prev = alpha * x + (1 - alpha) * prev;
    return prev;
}

void PreCalc_Process(VCU_Signals_t *in, PreCalc_t *out)
{
    out->speed_f = filter(in->speed);
    out->temp_f = filter(in->temp);
    out->volt_f = filter(in->voltage);
    out->curr_f = filter(in->current);
}
