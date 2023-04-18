#pragma once

#include <string>
#include <iostream>
using namespace std;

double euler = 2.718;

class Test{
    int n1;
    int n2;
public:
    Test() {
        n1 = n2 = 0;
    }

    Test(int first, int second) {
        n1 = first;
        n2 = second;
    }

    int sum() {
        return n1 + n2;
    }

    int productOfSum(int multiplier) {
        return multiplier * sum();
    }

    void display(){
        cout << "n1: " << n1 << "   n2: " << n2 << endl;
    }
};