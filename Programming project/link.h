#include <utility>

using namespace std;
class link
{
public:

    char cross_section;
    double r, b, h, link_length, mass_l, mass_p, ang_acc, moment, inertia, area, y_stress, custom_y_stress, density, weight_l, weight_m, bending_m, moment_I, stress, r_new, b_new, h_new;

    void input_data();
    double calc ();
    double comparison();
};
