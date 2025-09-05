#include <iostream>

namespace learncpp
{
    namespace part_1_11
    {
        int double_that_number(int number)
        {
            return 2 * number;
        }

        int double_console_input()
        {
            std::cout << "Enter an integer: ";
            int num{};
            std::cin >> num;

            return double_that_number(num);
        }
    }
}