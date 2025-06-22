#ifndef MOTORS_H
#define MOTORS_H
#include <vector>
#include <string>

using namespace std;
class Motors //creating a new data type - Motors
{
  public:
    //defining motor attributes

    string  M_model;
    double  M_torque,
            M_omega,
            M_mass,
            M_diameter;


    Motors(){}; //default constructor
    Motors(double M_torque, double M_omega);
    Motors(string n, double t, double o, double m , double dia);
};
//global function using vector of motors

void input_mlist (vector <Motors> &v_m); //motor list input function
void use_def_m(vector <Motors> &v_m); //inserting default in motor vector
void def_display(); // print default motor list
#endif

/*P = T/ratio * w(ratio)

M[1]("M1", 10, 100, 5, 5, 60)
G[1]("G1", 0.5, 0.90, 2, 5, 60)

C(M(),G(),L(), 20, 50, 50, 7, 5, 120, cost)

C("M1G1", 20, 50, 7, 5, 120, cost)*/
