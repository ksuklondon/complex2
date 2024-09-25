#include <iostream>
#include <iomanip>
#include "../ComplexLib/Complex.h"

void display(Complex const& complex)
{
    std::cout << std::endl;
    std::cout << "Complex: (";
    std::cout << complex.getReal();
    std::cout << ",";
    std::cout << complex.getImaginary();
    std::cout << ")";
    std::cout << std::endl;
    std::cout << "magnitude: ";
    std::cout << complex.magnitude();
    std::cout << std::endl;
    std::cout << "direction: ";
    std::cout << complex.direction();
    std::cout << std::endl;
}

int main()
{
    double real, imaginary;
    std::cout << "Enter real part:";
    std::cin >> real;
    std::cout << "Enter imaginary part:";
    std::cin >> imaginary;

    Complex complex(real, imaginary);

    display(complex);

    std::cout << "Enter real part:";
    std::cin >> real;
    std::cout << "Enter imaginary part:";
    std::cin >> imaginary;

    complex.setReal(real);
    complex.setImaginary(imaginary);

    display(complex);
}