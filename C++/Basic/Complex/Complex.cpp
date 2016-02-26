#include <iostream>
#include <cmath>
#include "Complex.h"


Complex::Complex(double real, double imaginary) {
	this->real = real;
	this->imaginary = imaginary;
}
Complex::~Complex() {

}

double Complex::getReal() const {
	return this->real;
}

double Complex::getImaginary() const {
	return this->imaginary;
}

bool Complex::operator==(const Complex& other) const {
	return real == other.real && imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex& other) const {
	return !operator==(other);
}

void Complex::operator+=(const Complex& other) {
	real += other.real;
	imaginary += other.imaginary;
}

void Complex::operator-=(const Complex& other) {
	real -= other.real;
	imaginary -= other.imaginary;
}

Complex Complex::operator+(const Complex& other) const {
	Complex sum = *this;
	
	sum += other;
	return sum;
}

Complex Complex::operator-(const Complex& other) const {
	Complex diff = *this;
	
	diff -= other;
	return diff;
}

Complex Complex::operator*(const Complex& other) const {
   double temp = real;
   
   Complex product(real * other.real - imaginary * other.imaginary, temp * other.imaginary + imaginary * other.real);
   
   return product;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
	out << '(' << complex.getReal() << std::showpos << complex.getImaginary() << "i)";
	out.unsetf(std::ios::showpos);

	return out;
}
