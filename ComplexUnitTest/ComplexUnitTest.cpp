#include "CppUnitTest.h"
#include "../ComplexLib/Complex.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ComplexUnitTest
{
	TEST_CLASS(ComplexUnitTest)
	{
	public:
		TEST_METHOD(ConstructorParameterless)
		{
			Complex c;
			Assert::AreEqual(0.0, c.getReal(), std::numeric_limits<double>::epsilon());
			Assert::AreEqual(0.0, c.getImaginary(), std::numeric_limits<double>::epsilon());
		}
		TEST_METHOD(ConstructorWithParameter)
		{
			Complex c(12.37, -14.89);
			Assert::AreEqual(12.37, c.getReal(), 0.01);
			Assert::AreEqual(-14.89, c.getImaginary(), 0.01);
		}
		TEST_METHOD(getReal)
		{
			Complex c(-23.74, 134.89);
			Assert::AreEqual(-23.74, c.getReal(), 0.01);
		}
		TEST_METHOD(getImaginary)
		{
			Complex c(-23.74, 134.89);
			Assert::AreEqual(134.89, c.getImaginary(), 0.01);
		}
		TEST_METHOD(setReal)
		{
			Complex c(-23.74, 134.89);
			c.setReal(920.23);
			Assert::AreEqual(920.23, c.getReal(), 0.01);
		}
		TEST_METHOD(setImaginary)
		{
			Complex c(-23.74, 134.89);
			c.setImaginary(-529.23);
			//TODO add a check that the value returned by the getImaginary method is correct
			Assert::AreEqual(-529.23, c.getImaginary(), 0.01);
		}
		TEST_METHOD(magnitudeZeroZero)
		{
			Complex c(0.0, 0.0);
			Assert::AreEqual(0.0, c.magnitude(), 0.01);
		}
		TEST_METHOD(magnitude0deg)
		{
			Complex c(4.0, 0.0);
			Assert::AreEqual(4.0, c.magnitude(), 0.01);
		}
		TEST_METHOD(magnitude90deg)
		{
			Complex c(0.0, 6.0);
			Assert::AreEqual(6.0, c.magnitude(), 0.01);
		}
		TEST_METHOD(magnitude180deg)
		{
			Complex c(-5.0, 0.0);
			Assert::AreEqual(5.0, c.magnitude(), 0.01);
		}
		TEST_METHOD(magnitude270deg)
		{
			Complex c(0.0, -12.0);
			Assert::AreEqual(12.0, c.magnitude(), 0.01);
		}
		TEST_METHOD(magnitudeIQuarter)
		{
			Complex c(233.74, 153.89);
			Assert::AreEqual(279.85, c.magnitude(), 0.01);
		}
		TEST_METHOD(magnitudeIIQuarter)
		{
			Complex c(-313.24, 713.48);
			Assert::AreEqual(779.21, c.magnitude(), 0.01);
		}
		TEST_METHOD(magnitudeIIIQuarter)
		{
			//TODO add a test implementation that verifies that the magnitude method returns the correct value for a complex number (-45.62, -92.17)
			Complex c(-45.62, -92.17);
			Assert::AreEqual(102.84, c.magnitude(), 0.01);
		}
		TEST_METHOD(magnitudeVIQuarter)
		{
			Complex c(512.79, -821.59);
			Assert::AreEqual(968.48, c.magnitude(), 0.01);
		}
		TEST_METHOD(directionZeroZero)
		{
			Complex c(0.0, 0.0);
			Assert::AreEqual(0.0, c.direction(), 0.01);
		}
		TEST_METHOD(direction0deg)
		{
			Complex c(4.0, 0.0);
			Assert::AreEqual(0.0, c.direction(), 0.01);
		}
		TEST_METHOD(direction90deg)
		{
			Complex c(0.0, 6.0);
			Assert::AreEqual(1.57, c.direction(), 0.01);
		}
		TEST_METHOD(direction180deg)
		{
			Complex c(-5.0, 0.0);
			Assert::AreEqual(3.14, c.direction(), 0.01);
		}
		TEST_METHOD(direction270deg)
		{
			Complex c(0.0, -12.0);
			Assert::AreEqual(-1.57, c.direction(), 0.01);
		}
		TEST_METHOD(directionIQuarter)
		{
			Complex c(23.74, 3.89);
			Assert::AreEqual(0.16, c.direction(), 0.01);
		}
		TEST_METHOD(directionIIQuarter)
		{
			Complex c(-13.44, 45.41);
			Assert::AreEqual(1.86, c.direction(), 0.01);
		}
		TEST_METHOD(directionIIIQuarter)
		{
			Complex c(-71.12, -932.92);
			Assert::AreEqual(-1.65, c.direction(), 0.01);
		}
		TEST_METHOD(directionIVQuarter)
		{
			Complex c(712.81, -434.39);
			Assert::AreEqual(-0.55, c.direction(), 0.01);
		}
	};
}