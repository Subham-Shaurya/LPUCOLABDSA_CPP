#include <iostream>

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r, float i) : real(r), imag(i) {}

    // Overloading addition operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overloading subtraction operator
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Display the complex number
    void display() const {
        std::cout << real;
        if (imag >= 0) {
            std::cout << " + " << imag << "i";
        } else {
            std::cout << " - " << -imag << "i";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Input for the first complex number
    float real1, imag1;
    std::cin >> real1 >> imag1;

    // Input for the second complex number
    float real2, imag2;
    std::cin >> real2 >> imag2;

    // Create instances of the Complex class
    Complex complex1(real1, imag1);
    Complex complex2(real2, imag2);

    // Perform addition and subtraction
    Complex addition = complex1 + complex2;
    Complex subtraction = complex1 - complex2;

    // Display the results
    addition.display();

    subtraction.display();

    return 0;
}

