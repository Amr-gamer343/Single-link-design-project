#include "Motors.h"
#include <iostream>
#include <vector>

using namespace std;

void Motors :: input_mlist () //motor list input function
{
    cout<<"Enter number of motors: ";
    int n;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        Motors M;
        cout<<endl<< "Enter motor model: ";
        cin>>M.M_model;

        cout<< "Enter motor torque (N.m): ";
        cin>>M.M_torque;

        cout<< "Enter motor speed (rpm): ";
        cin>>M.M_omega;

        cout<< "Enter motor mass (kg): ";
        cin>>M.M_mass;

        cout<< "Enter motor diameter (mm): ";
        cin>>M.M_diameter;

        cout<< "Enter motor width (mm): ";
        cin>>M.M_width;

        v_motors.push_back(M);


    }

}
