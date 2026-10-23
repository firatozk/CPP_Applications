/**
 * @file CPP009_If_Statements.cpp
 * @author firatozk
 * @brief This is a CPP Program, written to understand the If Statements concepts.
 * @version 1.0.0
 * @date 2026-10-23
 */

#include <iostream>

int main(){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >=18){
        std::cout << "Welcome to the site!" << '\n';
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!" << '\n';
    }
    else if(age >= 100){
        std::cout << "You are too old to enter this site!" << '\n';
    }
    else
    {
        std::cout << "Please leave the site you are underage for this site!" << '\n';
    }

return 0;
}