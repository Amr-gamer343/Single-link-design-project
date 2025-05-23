#include "gear_box.h"
#include<vector>
#include<string>
#include<iostream>


 void gear_box::usergear_input() {
    int number;
    std::cout <<endl<< "Enter the number of available gearboxes: ";
    std::cin >> number;

    for(int i = 0; i < number; i++) {
        gear_box G;

        std::cout << "Gearbox model: ";
        std::cin >> G.gearbox_model;

        std::cout << "Gearbox ratio: ";
        std::cin >> G.gear_ratio;

        std::cout << "Gearbox efficiency: ";
        std::cin >> G.efficiency;

        std::cout << "Gearbox mass: ";
        std::cin >> G.gear_mass;

        std::cout << "Gearbox diameter: ";
        std::cin >> G.gear_diameter;

        std::cout << "Gearbox width: ";
        std::cin >> G.gear_width;

        GEAR.push_back(G);
    }
}

