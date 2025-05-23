#ifndef GEAR_BOX_H
#define GEAR_BOX_H
#include<string>
#include<vector>

class gear_box
{
private:

    std::string gearbox_model;
    double gear_ratio;
    double efficiency;
    double gear_mass;
    double gear_diameter;
    double gear_width;

public:

    std::vector<gear_box>GEAR;
     void usergear_input();
     gear_box(){}; //default constructor
};

#endif // GEAR_BOX_H

