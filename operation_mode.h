#ifndef OPERATION_MODE_H
#define OPERATION_MODE_H
typedef enum
{
    NORMAL_MODE = 0,
    ECO_MODE,
    LIMP_MODE
}OperationMode_t;
OperationMode_t Get_OperationMode(void);
#endif
