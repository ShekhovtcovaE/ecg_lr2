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

int main()
{
    int a, b;
    a = readNumber();
    b = readNumber();
    writeAnswer(a + b);
    return 0;
}
