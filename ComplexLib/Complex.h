#pragma once
class Complex
{
private:
	double real;
	double imaginary;
public:
	Complex() noexcept;
	Complex(double real, double imaginary) noexcept;
	double getReal() const noexcept;
	double getImaginary() const noexcept;

	//TODO add a declaration of the setReal method that sets the real part of a complex number(real attribute)
	void setReal(double real);

	//TODO add a declaration of the setImaginary method that sets the imaginary part of a complex number(imaginary attribute)
	void setImaginary(double imaginary);

	//TODO add a declaration of the magnitude method that returns the magnitude of a complex number
	double magnitude() const noexcept;

	//TODO add a declaration of the direction method that returns the direction of a complex number
	double direction() const noexcept;
};