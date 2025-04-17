#include <iostream>
#include <string>
using namespace std;

class link
{
public:
    //attributes
    char cross_section;
    double r, b, h, link_length, mass_l, mass_p, ang_acc, moment, inertia, area, sigma;
    int material;

    void input_data()
    {
        cout << "input the cross section type (c) for circular (r) for rectangular" << endl;
        while(true)
        {
            cin >> cross_section;
            if(cross_section == 'c' || cross_section == 'r')
            {
                break;
            }
            else
            {
            cout << " bad input, (c) for circular (r) for rectangular" << endl;
            }
        }
        if(cross_section == 'c')
        {
            cout << "enter the radius" << endl;
            cin >> r;
        }
        else if(cross_section == 'r')
        {
            cout << "enter the base and height" << endl;
            cin >> b >> h;
        }
        cout << "enter the length of the link" << endl;
        cin >> link_length;
        cout << "enter the mass of the payload (kg)" << endl;
        cin >> mass_p;
        cout << "enter the maximum angular acceleration of the link (rad/s)" << endl;
        cin >> ang_acc;


    }
    void input_mat()
    {
        cout << "enter the material of the link" << endl;
        cin >> material;
    }

};
int main()
{
    link link1;
    link1.input_data();
    //output material selection table
    link1.input_mat();


    return 0;
}


