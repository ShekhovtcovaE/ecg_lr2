#include <iostream>
#include "constants.h"

double enterHeight()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double a;
    std::cin >> a;
    return a;

}

double knowHeight(int i)
{
    double height = myConstants::gravity * i * i / 2;
    return height;
}
void writeHeight(double a)
{
    for(int i = 0; i < 5; i++){
        if(i == 0) {
            std::cout << "At " << i << " seconds, the ball is at height: " << a << "\n";
        } else{
            double h = a - knowHeight(i);
            if(h > 0){
                std::cout << "At " << i << " seconds, the ball is at height: " << h << "\n";
            } else{
                std::cout << "At " << i << " the ball is on the ground.";
                break;
            }

        }

    }
}

int main()
{
    double a,b;
    a = enterHeight();
    writeHeight(a);
    return 0;
}
