#include <iostream>


int readNumber()
{
    std::cout << "Enter a number: ";
    int a;
    std::cin >> a;
    return a;
}

void writeAnswer(int c)
{
    std::cout << "a + b = " << c;
}
