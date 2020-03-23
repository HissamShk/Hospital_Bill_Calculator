#include "surgeryType.h"
int surgeryType::getArm()
{
    return Arm;
}
int surgeryType::getLeg()
{
    return Leg;
}
int surgeryType::getEye()
{
    return Eye;
}
int surgeryType::getBrain()
{
    return Brain;
}
int surgeryType::getHeart()
{
    return Heart;
}
surgeryType::surgeryType()
{
    Arm = 13040;
    Leg = 18110;
    Eye = 19705;
    Brain = 39750;
    Heart = 28965;
}
