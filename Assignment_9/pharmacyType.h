#ifndef PHARMACYTYPE_H
#define PHARMACYTYPE_H
class pharmacyType
{
public:
    /*Function to retrieve the information stored in the private variable Med_A*/
    int getMed_A();
    /*Function to retrieve the information stored in the private variable Med_B*/
    int getMed_B();
    /*Function to retrieve the information stored in the private variable Med_C*/
    int getMed_C();
    /*Function to retrieve the information stored in the private variable Med_D*/
    int getMed_D();
    /*Function to retrieve the information stored in the private variable Med_E*/
    int getMed_E();
    /*Constructor*/
    pharmacyType();
private:
    /*Variable to store the Cost of Med_A*/
    int Med_A;
    /*Variable to store the Cost of Med_B*/
    int Med_B;
    /*Variable to store the Cost of Med_C*/
    int Med_C;
    /*Variable to store the Cost of Med_D*/
    int Med_D;
    /*Variable to store the Cost of Med_E*/
    int Med_E;
};
#endif // PHARMACYTYPE_H
