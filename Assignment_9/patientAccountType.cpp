#include "patientAccountType.h"
patientAccountType::patientAccountType()
{
    Days = 1;
    Rate = 100;
    totalCharges = 0;
}
patientAccountType::patientAccountType(int D, int Total, int R)
{
    Days = D;
    Rate = R;
    totalCharges = Total;
}
void patientAccountType::setDays(int D)
{
    Days = D;
}
void patientAccountType::setTotalCharges(int Total)
{
    totalCharges = Total;
}
void patientAccountType::setRate(int R)
{
    Rate = R;
}
int patientAccountType::getDays()
{
    return Days;
}
int patientAccountType::getTotalCharges()
{
    return totalCharges;
}
int patientAccountType::getRate()
{
    return Rate;
}
int patientAccountType::getCost()
{
    int A;
    A = ((Days*Rate)+totalCharges);
    return A;
}
void patientAccountType::setSurgeryCharges(char Option)
{
    if(Option == 'A')
        {
            totalCharges += surgeryCharges.getArm();
        }
    else if(Option == 'B')
        {
            totalCharges += surgeryCharges.getLeg();
        }
    else if(Option == 'C')
        {
            totalCharges += surgeryCharges.getEye();
        }
    else if(Option == 'D')
        {
            totalCharges += surgeryCharges.getBrain();
        }
    else if(Option == 'E')
        {
            totalCharges += surgeryCharges.getHeart();
        }
}
void patientAccountType::setPharmacyCharges(char Option)
{
    if(Option == 'A')
        {
            totalCharges += pharmacyCharges.getMed_A();
        }
    else if(Option == 'B')
        {
            totalCharges += pharmacyCharges.getMed_B();
        }
    else if(Option == 'C')
        {
            totalCharges += pharmacyCharges.getMed_C();
        }
    else if(Option == 'D')
        {
            totalCharges += pharmacyCharges.getMed_D();
        }
    else if(Option == 'E')
        {
            totalCharges += pharmacyCharges.getMed_E();
        }
}
