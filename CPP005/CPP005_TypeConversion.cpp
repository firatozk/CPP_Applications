/**
 * @file CPP005_TypeConversion.cpp
 * @author firatozk
 * @brief This is a CPP Program, written to understand the Type Conversion concepts.
 * @version 1.0.0
 * @date 2026-10-21
 */

#include <iostream>

int main(){
 
    /* type conversion = conversion a value of one data type to another
       Implicit = automatic
       Explicit = Precede value with new data type (int) */

    /* Implicit Conversion */
    // double x = (int) 3.14;
    // std::cout << x << '\n';

    /* Explicit Conversion */
    //char x = 100; // ASCII Table 100 represent d character.
    //std::cout << x << '\n';

    /* Some conversion example */
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100; // if we don't add double type conversion the result will be truncated!

    std::cout << score << '%' << '\n';

    return 0;
}