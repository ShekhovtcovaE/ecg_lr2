#include <iostream>

int enterNumber()
{
    std::cout << "Enter a number between 0 and 255: ";
    int a;
    std::cin >> a;
    return a;

}

int octMacking(int a, int twoX)
{
    if (a <= twoX){
        std::cout << "0";
        return a;
    }else{
        std::cout << "1";
        return a - twoX;
    }
}

int main()
{
    int a = enterNumber();
    int x = 128;
    for(int i = 0; i < 8; i++){
        a = octMacking(a, x);
        x /= 2;
    }
    return 0;
}
