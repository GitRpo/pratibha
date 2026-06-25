#ifndef COMMON_TYPES_H
#define COMMON_TYPES_H
#include <stdint.h>

typedef struct {
    float speed;
    float temp;
    float voltage;
    float current;
    uint8_t opMode;
} VCU_Signals_t;

typedef struct {
    float speed_f;
    float temp_f;
    float volt_f;
    float curr_f;
} PreCalc_t;

typedef struct {
    float modeFactor;
    float tempFactor;
    float voltFactor;
    float currentFactor;
    float faultFactor;
    float flowFactor;
} Derate_t;

#endif
