#include "Combined_pairs.h"
#include <iostream>
#include <vector>


using namespace std;

class Combined_pairs
//: class Combined_pairs : public link , public Motors , public gear_box
{

double Combined_pairs :: Torque_output()
{
    double T_out = M_torque * gear_ratio * efficiency;

};

double Combined_pairs :: Omega_output()
{
    double O_out = M_omega / gear_ratio;
};

void Combined_pairs :: calcProperties()
{
    for(int i=0 ; i<n ; i++)
    {
        Combined_pairs C;
        double T_out();
        double O_out();
        if (T_out >= bending_m)
        {
            my_pairs.push_back(C);
        }
    }
};


};





//inner diameter of motor fits in inner diameter of gearbox
