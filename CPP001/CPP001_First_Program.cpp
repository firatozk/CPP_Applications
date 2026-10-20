/**
 * @file CPP001_First_Program.cpp
 * @author firatozk
 * @brief This is a CPP Program, written to understand the variables and basic data.
 * @version 1.0.0
 * @date 2026-10-19
 */ 

#include <iostream>

int main() {


    // Integer Examples
    int x = 5;
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // Float Examples
    float fx = 0.5f;
    float fy = 3.77f;

    std::cout << fx << '\n';
    std::cout << fy << '\n';

    // Double Examples
    double dx = 2.123456;
    double dy = 3.987654;

    std::cout << dx << '\n';
    std::cout << dy << '\n';

    // Single Character Examples
    char station1 = 'A';
    char station2 = 'B';

    std::cout << station1 << '\n';
    std::cout << station2 << '\n';

    // Boolean Examples
    bool condition1 = true;
    bool condition2 = false;

    std::cout << condition1 << '\n';
    std::cout << condition2 << '\n';

    // Strings with variable.
    std::string name = "firatozk";
    std::string city = "Istanbul";

    std::cout << name << '\n';
    std::cout << city << '\n';

    // String directly.
    std::cout << "Hello World" << '\n';

    return 0;
}