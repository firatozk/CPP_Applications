/**
 * @file CPP002_Namespace.cpp
 * @author firatozk
 * @brief This is a CPP Program, written to understand the namespace concept.
 * @version 1.0.0
 * @date 2026-10-19
 */ 

#include <iostream>

/* Namespaces are used to prevent name collisions and confusion, 
   unlike in C where you must avoid this issue by using unique names 
   for every single variable and function. */

namespace first_value{
    int value = 5;
}

namespace second_value{
    int value = 10;
}

int main() {

    int value = 0;

    std::cout << value << '\n'; // if namespace is not used the program prints the local variable.
    std::cout << first_value::value << '\n';
    std::cout << second_value::value << '\n';

    return 0;
}
