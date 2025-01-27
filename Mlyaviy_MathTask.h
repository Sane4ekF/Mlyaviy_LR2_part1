#ifndef _MLYAVIY_MATHTASK_H_
#define _MLYAVIY_MATHTASK_H_

#include <cstring>
#include <string>
using namespace std;


bool UserInput(string input) {

    if (input.empty()) return false;

    try {
        int number = stoi(input);
        if (number < 0) {
            return false;
        }
    }
    catch (...)
    { return false; }
    return true;
}


int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB ;
}
#endif