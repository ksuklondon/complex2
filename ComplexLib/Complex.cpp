#include <cmath>
#include "Complex.h"

Complex::Complex() noexcept
{
	real = 0.0;
	imaginary = 0.0;
}

Complex::Complex(double real, double imaginary) noexcept
{
	this->real = real;
	this->imaginary = imaginary;
}

double Complex::getReal() const noexcept
{
	return real;
}

double Complex::getImaginary() const noexcept
{
	return imaginary;
}

//TODO add a definition of the setReal method that sets the real part of a complex number(real attribute)


//TODO add a definition of the setImaginary method that sets the imaginary part of a complex number(imaginary attribute)


//TODO add a definition of the magnitude method that returns the magnitude of a complex number


//TODO add a definition of the direction method that returns the direction of a complex number (use atan2 fuction from C numerics library - cmath)
