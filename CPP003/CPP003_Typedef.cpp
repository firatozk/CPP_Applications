/**
 * @file CPP003_Typedef.cpp
 * @author firatozk
 * @brief This is a CPP Program, written to understand the typedef concept.
 * @version 1.0.0
 * @date 2026-10-20
 */ 

#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;

/* instead of 'typedef'
'using' keyword may be used 
because of the usability on templates (work better). */

using text2_t = std::string;
using number2_t = int; 


typedef int number_t;

/* Instead of using long typedef definition 
   we can transfer this typedef to someother 
   definition, this helps us write cleaner code and readability.
   '_t' shows this is a typedef. typedef must be used
   when it is necessary, use when there is a clear benefit.*/

int main(){

    //with typedef keyword

    pairlist_t pairlist;

    std::cout << "with typedef keyword" << '\n';
    text_t firstName = "Firat"; 
    std::cout << "Name: " << firstName << '\n';

    number_t age = 23;
    std::cout << "Age: " << age << '\n';

    // with using keyword

    std::cout << "with using keyword" << '\n';
    text2_t secondName = "Can"; 
    std::cout << "Name: " << secondName << '\n';

    number2_t age_with_alias = 23;
    std::cout << "Age: " << age_with_alias << '\n';


    return 0;
}