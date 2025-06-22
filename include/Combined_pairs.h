#define COMBINED_PAIRS_H
#include "Motors.h"
#include "link.h"
#include "gear_box.h"

using namespace std;

class Combined_pairs : public link , public Motors , public gear_box
{
    public:
        double optimal_torque;
        double optimal_omega;

        void cost_optimization();
        void calcProperties();
        std:: vector <Combined_pairs> my_pairs;
};

