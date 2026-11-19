#include <iostream>
#include <string>

void calculation(float num1, float num2, int operation)
{
    if (operation == 1)
    {
        std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
        int exit;
        std::cin >> exit;
    }
    else if (operation == 2)
    {
        std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
        int exit;
        std::cin >> exit;
    }
    else if (operation == 3)
    {
        std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
        int exit;
        std::cin >> exit;
    }
    else if (operation == 4)
    {
        if (num2 != 0)
        {
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            int exit;
            std::cin >> exit;
        }
    }
}

int main()
{
    std::cout << "Welcome to the calculator program in C++" << std::endl;
    std::cout << "Please enter your first number" << std::endl;
    float num1{};
    std::cin >> num1;
    std::cout << "Please enter your second number" << std::endl;
    float num2{};
    std::cin >> num2;
    std::cout << "Please enter your operation (1 - Additon, 2 - Subtraction, 3 - Multiplacation, 4 - division)" << std::endl;
    int operation{};
    std::cin >> operation;
    calculation(num1, num2, operation);
}
