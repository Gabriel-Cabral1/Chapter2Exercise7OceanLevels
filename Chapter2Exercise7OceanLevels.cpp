/*
 Project Name : Chapter 2 Exercise 7 Ocean Levels
 File Name : Chapter2Exercise7OceanLevels.cpp
 Programmer : Gabriel Cabral
 Date : 09/15/25
 Requirements:
 Rising ocean level by 1.5 milimeters by 5,7,10 years
*/
#include <iostream>

int main()
{
    //set all nuumbers in mm
    double lengthInMillimeters = 1.5;
    std::cout << "The Oceans Levels rise " << lengthInMillimeters << "mm" << " every year." << std::endl;
    //ocean grows 1.5mm per year

    //ocean level in 5 yr
    std::cout << "The ocean will rise " << lengthInMillimeters * 5 << "mm" << " in 5 years. " << std::endl;

    //ocean level in 7 yr
    std::cout << "The ocean will rise " << lengthInMillimeters * 7 << "mm" << " in 7 years. " << std::endl;

    //ocean level in 10 yr
    std::cout << "The ocean will rise " << lengthInMillimeters * 10 << "mm" << " in 10 years. " << std::endl;

    return 0;
}
