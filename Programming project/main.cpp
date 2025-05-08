#include <iostream>
#include <string>
#include "link.h"
#include "Materials.h"

using namespace std;

int main()
{
    link link1;
    link1.input_data();
    Materials m;
    m.displayTable();
    link1.density=m.selected_density;
    link1.y_stress=m.selected_y_stress;
    double stress=link1.calc();
    cout<<"The stress: "<<stress<<" MPa\n"<<endl;
    link1.comparison();
    double new_stress=link1.calc();
    cout<<"The new stress: "<<new_stress<<" MPa\n"<<endl;
    return 0;
}
