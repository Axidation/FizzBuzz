// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.//

#include <iostream>

int main()
{
    int i = 1;

    for (int i = 1; i < 101; i++)
    {

        if (!(i % 3))
        {
            if (!(i % 5)) std::cout << "FizzBuzz\n";
            else std::cout << "Fizz\n";
        }
        else if (!(i % 5)) std::cout << "Buzz\n";
        else std::cout << i << "\n";

    }

}