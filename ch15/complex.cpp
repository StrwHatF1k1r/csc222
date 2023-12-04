#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    double real, imag;
    double mag, theta;
    bool polar;

public:
    Complex() {
        real = 0; imag = 0;
        polar = false;
    }

    Complex(double r, double i) {
        real = r; imag = i;
        polar = false;
    }

    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator/(const Complex& c) {
        if (c.real == 0 && c.imag == 0) {
            cerr << "Error: Division by zero" << endl;
            return Complex();
        }

        double denominator = c.real * c.real + c.imag * c.imag;
        double realResult = (real * c.real + imag * c.imag) / denominator;
        double imagResult = (imag * c.real - real * c.imag) / denominator;

        return Complex(realResult, imagResult);
    }

    double abs() {
        return sqrt(real * real + imag * imag);
    }

    double get_real() {
        return real;
    }

    double get_imag() {
        return imag;
    }

    string str_cartesian() {
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
