#include <iostream>
#include <cmath>

int main(void)
{
    unsigned i, n;
    bool is_prime;
    while (std::cin >> n)
    {
        is_prime = true;

        if (n == 0 || n == 1)
            is_prime = false;

        for (i = 2; i <= std::sqrt(n); i++)
            if (n % i == 0)
            {
                is_prime = false;
                break;
            }

        if (is_prime)
            std::cout << n << " is a prime: True" << std::endl;
        else
            std::cout << n << " is a prime: False" << std::endl;
    }
    return 0;
}
