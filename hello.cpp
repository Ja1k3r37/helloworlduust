#include <iostream>

int main() {
    std::cout << "Hello world from �����!" << std::endl;

    int a, b;
    std::cout << "������� ��� �����: ";
    std::cin >> a >> b;

    std::cout << "������� �����: " << ((a > b) ? a : b) << std::endl;
    return 0;
}