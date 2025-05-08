#include <iostream>
#include <cmath>
#include "link.h"

using namespace std;

float g = 9.81;

void link::input_data()
{
    cout << "Input the cross section type (c) for circular (r) for rectangular: ";
    while(true)
    {
        cin >> cross_section;
        if(cross_section == 'c' || cross_section == 'r')
        {
        break;
        }
        else
        {
            cout << " Wrong input, (c) for circular (r) for rectangular: ";
        }
    }
    if(cross_section == 'c')
    {
        cout << "Enter the radius (mm): ";
        cin >> r;
    }
    else if(cross_section == 'r')
    {
        cout << "Enter the base and height (mm): ";
        cin >> b >> h;
    }
    cout << "Enter the length of the link (mm): ";
    cin >> link_length;
    cout << "Enter the mass of the payload (kg): ";
    cin >> mass_p;
    cout << "Enter the maximum angular acceleration of the link (rad/s^2): ";
    cin >> ang_acc;
}

double link::calc()
{
    if(cross_section=='c')
    {
        mass_l= density* pow(10,-6) * M_PI * pow(r,2) * link_length;
        moment_I= (M_PI*pow(r,4))/4;
    }
    else if(cross_section=='r')
    {
        mass_l= density* pow(10,-6) * b * h * link_length;
        moment_I= (b*pow(h,3))/12;
    }
    else
        cout<<"Please choose c or r!"<<endl;
    weight_l= mass_l * g * link_length/2;
    weight_m= mass_p * g * link_length;
    inertia= (mass_l*pow(link_length/2,2)*ang_acc)+(mass_p*pow(link_length,2)*ang_acc);
    bending_m= weight_l + weight_m + inertia;
    if(cross_section=='c')
        stress= (bending_m*r)/moment_I;
    else if(cross_section=='r')
        stress= (bending_m*h)/(2*moment_I);
    return stress;
}

double link::comparison()
{
    double new_stress=stress;
    if(cross_section=='c' && stress>y_stress)
    {
        r_new=r*1.01;
        cout<<"The new radius: "<<r_new<<" mm"<<endl;
    }
    else if(cross_section=='c' && stress<y_stress)
    {
        if(stress<y_stress)
        {
            for(int i=0; stress<y_stress; i++)
            {
                r= r*0.99;
                stress=calc();
            }
            r=r/0.99;
            stress=calc();
            new_stress=stress;
            r_new=r;
            cout<<"The new radius: "<<r_new<<" mm"<<endl;
        }
        else if(stress<custom_y_stress)
        {
            for(int i=0; stress<custom_y_stress; i++)
            {
                r= r*0.99;
                stress=calc();
            }
            r=r/0.99;
            stress=calc();
            new_stress=stress;
            r_new=r;
            cout<<"The new radius: "<<r_new<<" mm"<<endl;
        }
    }
    else if(cross_section=='r' && stress>y_stress)
    {
        b_new=b*1.01;
        h_new=h*1.01;
        cout<<"The new base & height: "<<b_new<<" mm, "<<h_new<<" mm"<<endl;
    }
    else if(cross_section=='r' && stress<y_stress)
    {
        if(stress<y_stress)
        {
            for(int i=0; stress<y_stress; i++)
            {
                b= b*0.99;
                h= h*0.99;
                stress=calc();
            }
            b=b/0.99;
            h=h/0.99;
            stress=calc();
            new_stress=stress;
            b_new=b;
            h_new=h;
            cout<<"The new base & height: "<<b_new<<" mm, "<<h_new<<" mm"<<endl;
        }
        else if(stress<custom_y_stress)
        {
            for(int i=0; stress<custom_y_stress; i++)
            {
                b= b*0.99;
                h= h*0.99;
                stress=calc();
            }
            b=b/0.99;
            h=h/0.99;
            stress=calc();
            new_stress=stress;
            b_new=b;
            h_new=h;
            cout<<"The new base & height: "<<b_new<<" mm, "<<h_new<<" mm"<<endl;
        }

    }
    return 0;
}

