/* C++ port of a similar program created to calculate 
 * the states of a cascade-cycle heat pump, used to assist
 * with learning the syntax of the CoolProp library.
*/ 

#include "crossplatform_shared_ptr.h"
#include "AbstractState.h"

using namespace CoolProp;

void displayCascade() {
    // Operating pressures (Pa) of the two cascaded loops
    int bot_low = 280000;  
    int bot_high = 500000;
    int top_low = 500000;
    int top_high = 700000;

    // Initialize R134a fluid object
    shared_ptr<AbstractState> R134a(AbstractState::factory("HEOS", "R134A"));

    // State 1: Given bottoming-low pressure and sat. vapor
    R134a->update(PQ_INPUTS, bot_low, 1);
    double h_1 = R134a->hmass();
    double s_1 = R134a->smass();
    cout << "State 1: " << h_1 << " J/kg" << endl;

    // State 2: Given bottoming-high pressure and s2 = s1
    R134a->update(PSmass_INPUTS, bot_high, s_1);
    double h_2 = R134a->hmass();
    cout << "State 2: " << h_2 << " J/kg" << endl;

    // State 3: Given bottoming-high pressure and sat. liquid
    R134a->update(PQ_INPUTS, bot_high, 0);
    double h_3 = R134a->hmass();
    double s_3 = R134a->smass();
    cout << "State 3: " << h_3 << " J/kg" << endl;

    // State 4: Given bottoming-low pressure and s4 = s3
    R134a->update(PSmass_INPUTS, bot_low, s_3);
    double h_4 = R134a->hmass();
    cout << "State 4: " << h_4 << " J/kg" << endl;

    // State 5: Given topping-low pressure and sat. vapor
    R134a->update(PQ_INPUTS, top_low, 1);
    double h_5 = R134a->hmass();
    double s_5 = R134a->smass();
    cout << "State 5: " << h_5 << " J/kg" << endl;

    // State 6: Given topping-high pressure and s6 = s5
    R134a->update(PSmass_INPUTS, top_high, s_5);
    double h_6 = R134a->hmass();
    cout << "State 6: " << h_6 << " J/kg" << endl;

    // State 7: Given topping-high pressure and sat. liquid
    R134a->update(PQ_INPUTS, top_high, 0);
    double h_7 = R134a->hmass();
    double s_7 = R134a->smass();
    cout << "State 7: " << h_7 << " J/kg" << endl;

    // State 8: Given topping low pressure and s8=s7
    R134a->update(PSmass_INPUTS, top_low, s_7);
    double h_8 = R134a->hmass();
    cout << "State 8: " << h_8 << " J/kg" << endl;

}