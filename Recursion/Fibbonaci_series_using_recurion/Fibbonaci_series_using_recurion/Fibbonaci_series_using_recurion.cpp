// Fibbonaci_series_using_recurion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int fibbonacci(int);

int main()
{
    std::cout << "Hello World! Welcome to Rajesh C programs:\n";
    int num, i, value;

    std::cout << "Enter the Number :";
    std::cin >> num;
    //vbxkvbfb

    for (i = 0; i <= num; i++)
    {
        value = fibbonacci(i);
        std::cout << value << std::endl;
    }

}

int fibbonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibbonacci(num - 1) + fibbonacci(num - 2);
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
