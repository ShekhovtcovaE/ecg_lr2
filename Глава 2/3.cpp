#include <iostream>

double enterNumber()
{
    std::cout << "Enter a double value: ";
    double a;
    std::cin >> a;
    return a;

}

char enterCharacter()
{
    std::cout << "Enter one of the following: +, -, *, or /: *\n" ;
    char x;
    std::cin >> x;
    return x;
}

void doAndWriteExpression(double a, double b, char c)
{
    switch(c){
        case '+':
            std::cout << a << " + " << b << " = " << a + b ;
            break;
        case '-':
            std::cout << a << " - " << b << " = " << a - b ;
            break;
        case '*':
            std::cout << a << " * " << b << " = " << a * b ;
            break;
        case '/':
            std::cout << a << " / " << b << " = " << a / b ;
            break;
    }
}

int main()
{
    double a,b;
    a = enterNumber();
    b = enterNumber();
    char c;
    c = enterCharacter();
    doAndWriteExpression(a, b, c);
    return 0;
}
