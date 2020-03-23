/*(Three Classes)Hospital Bill Calculator by Hissamuddin Shaikh*/
#include <iostream>
#include <iomanip>
#include <string>
#include "surgeryType.h"
#include "pharmacyType.h"
#include "patientAccountType.h"
using namespace std;
/*Prototype for Error Control Function*/
char InputErrorControl(char);
/*Main Function*/
int main(){
/*Variable Setup*/
char Choice;
char Final_Choice;
int Days;
string Choice_2;
patientAccountType Account_Setup;
/*Setup for do-While loop of Patient Costs*/
do{
  /*Set up for Surgery Type Selection and Cost Calculation*/
  cout<< endl << setw(29) << "Hospital Bill Menu" << endl;
  cout<< endl << setw(40) << "---------------------------------------";
  cout<< endl << setw(28) << "Surgery Selection";
  cout<< endl << setw(40) << "---------------------------------------" << endl;
  cout<< endl << setw(17) << "A - Arm Surgery"<< endl;
  cout<< endl << setw(17) << "B - Leg Surgery"<< endl;
  cout<< endl << setw(17) << "C - Eye surgery"<< endl;
  cout<< endl << setw(19) << "D - Brain Surgery"<< endl;
  cout<< endl << setw(19) << "E - Heart Surgery"<< endl;
  cout<< endl << setw(72) << "Select the Type of Surgery, undertaken by Patient (A, B, C, D or E):- ";
  cin>> Choice;
  Final_Choice = InputErrorControl(Choice);
  Account_Setup.setSurgeryCharges(Final_Choice);
  /*Setup for a do-While loop to take in Multiple Medicines*/
  do{
   /*Set up for Medicine Selection and Cost Calculation*/
   cout<< endl << setw(40) << "---------------------------------------";
   cout<< endl << setw(28) << "Medicine Selection";
   cout<< endl << setw(40) << "---------------------------------------" << endl;
   cout<< endl << setw(11) << "A - Med_A" <<endl;
   cout<< endl << setw(11) << "B - Med_B" <<endl;
   cout<< endl << setw(11) << "C - Med_C" <<endl;
   cout<< endl << setw(11) << "D - Med_D" <<endl;
   cout<< endl << setw(11) << "E - Med_E" <<endl;
   cout<< endl << setw(24) << "F - Exit Medicine Menu" <<endl;
   cout<< endl << setw(59) << "Enter ALL Medications Received/Prescribed to the Patient "
   << "(Enter 1 Medicine at a Time, then Enter 'F' when done):- ";
   cin>>Choice;
   Final_Choice = InputErrorControl(Choice);
   Account_Setup.setPharmacyCharges(Final_Choice);
   /*End Condition for nested do-While loop*/
  }while(Final_Choice != 'F');
   /*Set up for Prompting Days of Stay at Hospital*/
  cout<< endl << setw(40) << "---------------------------------------";
  cout<< endl << setw(25) << "Time of Stay";
  cout<< endl << setw(40) << "---------------------------------------" << endl;
  cout<< endl << setw(74) << "Enter the Number of Days the Patient was admitted for at the Hospital:- ";
  cin>>Days;
  Account_Setup.setDays(Days);
  /*Setup for Displaying Results*/
  cout<< endl << setw(40) << "---------------------------------------";
  cout<< endl << setw(25) << "Total Report";
  cout<< endl << setw(40) << "---------------------------------------" << endl;
  cout<< endl << setw(42) << "Number of Days spent, in the Hospital:- "<< Account_Setup.getDays()<<endl;
  cout<< endl << setw(30) << "Hospital Occupancy Charge:- "<< Account_Setup.getRate()<<endl;
  cout<< endl << setw(42) << "Total Charge for Surgery and Medicine:- "<< Account_Setup.getTotalCharges()<<endl;
  cout<< endl << setw(26) << "Total Cost at Checkout: "<< Account_Setup.getCost()<<endl;
  /*Setup for reseting Total Charges for the potential Patient*/
  Account_Setup.setTotalCharges(0);
  /*Set up for prompting user to enter New Patient or Not, also the End Condition for main do-While loop*/
  cout<< endl << setw(76) << "Do you want to Compute the Costs, for another Patient (Enter Yes or No):- ";
  cin>> Choice_2;
  cout<< endl << setw(40) << "---------------------------------------" << endl;
  /*Error Control for Choice_2*/
  if (Choice_2=="Yes"||Choice_2=="yes"||Choice_2=="YES"||Choice_2=="YEs"||Choice_2=="yES"||Choice_2=="yEs"||Choice_2=="yeS")
      Choice_2 = "Yes";
} while(Choice_2 == "Yes");
  return 0;
}
/*Setup for Error Control Function*/
char InputErrorControl(char Input)
{
    if (Input == 'a')
        Input = 'A';
    else if (Input == 'b')
        Input = 'B';
    else if (Input == 'c')
        Input = 'C';
    else if (Input == 'd')
        Input = 'D';
    else if (Input == 'e')
        Input = 'E';
    else if (Input == 'f')
        Input = 'F';
    return Input;
}
