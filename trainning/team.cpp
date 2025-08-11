#include <iostream>

int main(void)
{
    int problems;
    int f1, f2, f3;
    int total = 0;

    std::cin >> problems;
    while (problems--)
    {
        std::cin >> f1 >> f2 >> f3;
        if ((f1 + f2 + f3) >= 2)
            total++;
    }
    std::cout << total << std::endl;
    return (0);
}