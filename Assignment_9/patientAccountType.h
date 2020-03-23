#ifndef PATIENTACCOUNTTYPE_H
#define PATIENTACCOUNTTYPE_H
#include "surgeryType.h"
#include "pharmacyType.h"
class patientAccountType
{
public:
    /*Function to add the cost of the Medicines to the private variable totalCharges*/
    void setPharmacyCharges(char Option);
    /*Function to add the cost of the Surgery to the private variable totalCharges*/
    void setSurgeryCharges (char Option);
    /*Function to retrieve the total cost of the Surgery, Medicines and Hospital stay combined*/
    int getCost();
    /*Function to retrieve the information stored in the private variable Rate*/
    int getRate();
    /*Function to retrieve the information stored in the private variable totalCharges*/
    int getTotalCharges();
    /*Function to retrieve the information stored in the private variable Days*/
    int getDays();
    /*Function to set the value of private variable Rate*/
    void setRate (int R);
    /*Function to set the value of private variable totalCharges*/
    void setTotalCharges(int Total);
    /*Function to set the value of private variable Days */
    void setDays (int D);
    /*Constructor with Parameters*/
    patientAccountType(int D, int Total, int R);
    /*Constructor*/
    patientAccountType();

private:
    /*Variable to store the Days spent by the Patient at the Hospital*/
    int Days;
    /*Variable to store the charges for the Medication and Surgery*/
    int totalCharges;
    /*Variable to store the Amount that is charged for each day spent at the Hospital*/
    int Rate;
    /*Object to access the class surgeryType*/
    surgeryType surgeryCharges;
    /*Object to access the class pharmacyType*/
    pharmacyType pharmacyCharges;
};
#endif // PATIENTACCOUNTTYPE_H
