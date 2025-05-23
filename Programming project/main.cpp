#include <iostream>
#include <string>
#include "link.h"
#include "Materials.h"
#include "Motors.h"
#include "gear_box.h"

using namespace std;

int main()
{
    link link1;
    link1.input_data();
    Materials m;
    m.displayTable();

    link1.density=m.selected_density; //passes the material prop. to link class
    link1.y_stress=m.selected_y_stress;

    double stress=link1.calc();
    cout<<"The stress: "<<stress<<" MPa\n"<<endl;

    link1.comparison();
    link1.output_dim();
    Motors M1;
    M1.input_mlist ();
    gear_box G1;
    G1.usergear_input();
    return 0;
}
