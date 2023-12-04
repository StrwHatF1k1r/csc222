#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator/(const Complex& c) const {
        if (c.real == 0 && c.imag == 0) {
            cerr << "Error: Division by zero" << endl;
            return Complex();
        }

        return Complex(real / c.real, imag / c.imag);
    }

    double abs() const {
        return sqrt(real * real + imag * imag);
    }

    double get_real() const {
        return real;
    }

    double get_imag() const {
        return imag;
    }

    string str_cartesian() const {
        return to_string(get_real()) + " + " + to_string(get_imag()) + "i";
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 7);

    Complex difference = c1 - c2;
    cout << "Subtraction Result: " << difference.str_cartesian() << endl;

    Complex divisionResult = c1 / c2;
    cout << "Division Result: " << divisionResult.str_cartesian() << endl;

    cout << "Absolute Value of c1: " << c1.abs() << endl;

    return 0;
}
