#include <vector>
#include <string>
#define MOTORS_H



class Motors
{
 private:
    //defining motor attributes

    std::string M_model= " ";
    double  M_torque=0.0,
            M_omega=0.0,
            M_mass=0.0,
            M_diameter=0.0,
            M_width=0.0;

public:
        Motors(){}; //default constructor
        std:: vector <Motors> v_motors; //defining a vector of motors
        void input_mlist ();  //motor list input function



};


