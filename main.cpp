#include <iostream>

double function(double num, double pow)
    {
        double powered = 1;
        if (pow == 0)
        {
            return 1;
        }

        else
        {
            for (int i = 1; i <= pow; i++)
            {
                powered = powered * num;
            }
        }

        return powered;
    }

int main()
{
    double a, b;

    std::cout << "Enter the base number: ";
    std::cin >> a;
    std::cout << "Enter the exponent number: ";
    std::cin >> b;

    std::cout << function(a, b) << std::endl;
    
    return 0;
}