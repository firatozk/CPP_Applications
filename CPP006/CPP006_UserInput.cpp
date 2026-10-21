/**
 * @file CPP006_UserInput.cpp
 * @author firatozk
 * @brief This is a CPP Program, written to understand the User Input concepts.
 * @version 1.0.0
 * @date 2026-10-21
 */

 // cout << (insertion operator)
 // cin >> (extraction operator)

#include <iostream>

int main(){

    std::string name;
    std::string fullname;
    int age;
    
    std::cout << "What is your fullname?" << '\n';
    std::getline(std::cin >> std::ws, fullname); /* Use this getline function when the input string has spacing character. std::ws used to exclude newline character from the buffer.*/
    std::cout << "Your fullname is: " << fullname << '\n';

    std::cout << "What is your firstname?: ";
    std::cin >> name;

    std::cout << "What is your age?: ";
    std::cin >> age;


    std::cout << "Hello " << name << '\n' ;
    std::cout << "Your age is: " << age << '\n';


    return 0;
}