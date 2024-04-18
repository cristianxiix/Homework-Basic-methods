#pragma once
#include "FunctiiMath.h"

int DoSomething(int a, int b)
{
    int sum;
    sum = a + b;
    std::cout << "Suma este " << sum << std::endl;
    return sum;
}

std::string addChar(std::string& anything, char z)
{
    ///anything += z;
    anything.push_back(z);
    return anything;
}
void printHello(std::string nume)
{
    std::cout << "hello world" << addChar(nume, 'z') << std::endl;
}