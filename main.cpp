#include <iostream>
#include "CoolProp.h"
#include "misc/test.h"
#include "misc/cascade.cpp"

int main(){
    std::cout << "The NBP of water is: " << CoolProp::PropsSI("T","P",101325,"Q",0,"Water") << " K" << std::endl;
    std::cout << "The NBP of water is: " << CoolProp::PropsSI("T","P",101325,"Q",0,"Water") << " K" << std::endl;

    cout << CONST << endl;

}