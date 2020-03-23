#ifndef SURGERYTYPE_H
#define SURGERYTYPE_H
class surgeryType
{
public:
    /*Function to retrieve the information stored in the private variable Arm*/
    int getArm();
    /*Function to retrieve the information stored in the private variable Leg*/
    int getLeg();
    /*Function to retrieve the information stored in the private variable Eye*/
    int getEye();
    /*Function to retrieve the information stored in the private variable Brain*/
    int getBrain();
    /*Function to retrieve the information stored in the private variable Heart*/
    int getHeart();
    /*Constructor*/
    surgeryType();
private:
    /*Variable to store the Cost of Arm Surgery*/
    int Arm;
    /*Variable to store the Cost of Leg Surgery*/
    int Leg;
    /*Variable to store the Cost of Eye Surgery*/
    int Eye;
    /*Variable to store the Cost of Brain Surgery*/
    int Brain;
    /*Variable to store the Cost of Heart Surgery*/
    int Heart;
};
#endif // SURGERYTYPE_H
