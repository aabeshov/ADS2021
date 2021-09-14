#include <iostream>

int main()
{
    int a, b;

    std::cout << "Enter two values: ";

    if ( std::cin >> a >> b )
    {
        std::cout << "The original values: a = " << a << ", b = " << b << std::endl;
        int tmp = a;
        a = b;
        b = tmp;
        std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;
    }
    else
    {
        std::cout << "Unexpected error occured" << std::endl;
    }
}
