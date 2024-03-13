#include <iostream>
#include <cmath>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    // Câu 1: Hàm tạo và hàm hủy
    ComplexNumber() : real(0), imaginary(0) {}
    ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}
    ~ComplexNumber() {}

    // Câu 2: Toán tử nhập và xuất
    friend std::istream& operator>>(std::istream& in, ComplexNumber& complex);
    friend std::ostream& operator<<(std::ostream& out, const ComplexNumber& complex);

    // Câu 3: Toán tử cộng, trừ, nhân, chia
    ComplexNumber operator+(const ComplexNumber& other) const;
    ComplexNumber operator-(const ComplexNumber& other) const;
    ComplexNumber operator*(const ComplexNumber& other) const;
    ComplexNumber operator/(const ComplexNumber& other) const;
};

// Câu 2: Toán tử nhập và xuất
std::istream& operator>>(std::istream& in, ComplexNumber& complex) {
    std::cout << "Nhap phan thuc: ";
    in >> complex.real;
    std::cout << "Nhap phan ao: ";
    in >> complex.imaginary;
    return in;
}

std::ostream& operator<<(std::ostream& out, const ComplexNumber& complex) {
    out << complex.real << " + " << complex.imaginary << "i";
    return out;
}

// Câu 3: Toán tử cộng, trừ, nhân, chia
ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imaginary + other.imaginary);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const {
    return ComplexNumber(real - other.real, imaginary - other.imaginary);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {
    return ComplexNumber(
        real * other.real - imaginary * other.imaginary,
        real * other.imaginary + imaginary * other.real
    );
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) const {
    double denominator = other.real * other.real + other.imaginary * other.imaginary;
    return ComplexNumber(
        (real * other.real + imaginary * other.imaginary) / denominator,
        (imaginary * other.real - real * other.imaginary) / denominator
    );
}

int main() {
    ComplexNumber a, b;

    // Câu 2: Toán tử nhập
    std::cout << "Nhap so phuc a:\n";
    std::cin >> a;

    // Câu 2: Toán tử xuất
    std::cout << "So phuc a: " << a << std::endl;

    // Câu 2: Toán tử nhập
    std::cout << "Nhap so phuc b:\n";
    std::cin >> b;

    // Câu 2: Toán tử xuất
    std::cout << "So phuc b: " << b << std::endl;

    // Câu 3: Thực hiện cộng, trừ, nhân, chia và xuất kết quả
    std::cout << "a + b = " << (a + b) << std::endl;
    std::cout << "a - b = " << (a - b) << std::endl;
    std::cout << "a * b = " << (a * b) << std::endl;
    std::cout << "a / b = " << (a / b) << std::endl;

    return 0;
}
