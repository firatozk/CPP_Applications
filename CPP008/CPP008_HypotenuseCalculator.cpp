/**
 * @file CPP008_HypotenuseCalculator.cpp
 * @author firatozk
 * @brief This is a CPP Program, written to create a HypotenuseCalculator, by doing that using the related functions.
 * @version 1.0.0
 * @date 2026-10-22
 */

/*
    hypotenuse = c = sqrt(a^2 + b^2) 
*/

#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;

    a = pow(a,2);
    b = pow(b,2);

    c = sqrt(a + b);

    std::cout << "Your Triangle's Hypotenuse is: " << c << '\n'; 

    return 0; 
}