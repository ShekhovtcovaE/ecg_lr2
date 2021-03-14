#include <iostream>

int main()
{
    // Вводим числа
    setlocale(LC_ALL, "rus");
	std::cout << "Введите меньшее число: ";
    int x;
    std::cin >> x;

    std::cout << "Введите большее число: ";
    int y;
    std::cin >> y;

    // Если большее число меньше меньшего, меняем их с помощью временной переменной
    if(y < x) {
        int temp = y;
        y = x;
        x = temp;
    }
    // Временная переменная уничтожается

    std::cout << "Меньшее число: " << x << "\n";
    std::cout << "Большее число: " << y << "\n";
	return 0;
}
