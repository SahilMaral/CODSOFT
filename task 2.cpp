// develop a calculator program that perform basic arithmetic operation Addition, subscription, multiplication and division. Allow the user to input 2 number and choice an operation to perform
#include <iostream>

int main()
{
    // initializing a variables 
    int no1, no2 ,ch;
    // To accept operation for switch case
    std::cout<<"1)Addition\n";
    std::cout<<"2)Substraction\n";
    std::cout<<"3)Multiplication\n";
    std::cout<<"4)Division\n";
    std::cout<<"Enter your choise: ";
    std::cin>> ch;
    // accepting first value
    std::cout<<"Enter a first number: ";
    std::cin>> no1;
    // accepting second value
    std::cout<<"Enter a first number: ";
    std::cin>> no2;
    // case start
    switch(ch)
    {
        // case for Addition
        case 1 : std::cout<<"Addition of two number are: "<<no1 + no2;
        break;
        // case for Substraction
        case 2 : std::cout<<"Substraction of two number are: "<<no1 - no2;
        break;
        // case for Multiplication
        case 3 : std::cout<<"Multiplication of two number are: "<<no1 * no2;
        break;
        // case for Division
        case 4 : std::cout<<"Division of two number are: "<<no1 / no2;
        break;
        // if case are not match
        default : std::cout<<"Enter valid choise: ";
    }
    // case end
    return 0;
}
