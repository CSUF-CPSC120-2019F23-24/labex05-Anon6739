// This program creates a Random Rectangle
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <ctime>
#include <cstdlib>

int main ()
{

//These are the maximum length/base, and height values for the rectangle.
//    int max_length = 40;
//    int max_width = 40;
    int height = 3;

    unsigned seed = time(0);
    srand(seed);

    int max = 40;
    int num;
    num = rand() % max + 1;

    std::string eq;
    eq.assign(num, '=');


    std::cout << eq << std:: endl;
    //std::cout << "The height is: " << height << std::endl;
    std::cout << eq << std::endl;
    std::cout << eq << std::endl;


    return 0;
}
