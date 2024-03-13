#include <iostream>

class DaThuc {
public:
    int level;
    int heSo;

    DaThuc() {}

    void nhap() {
        std::cout << "Nhap bac da thuc: ";
        std::cin >> level;
        std::cout << "Nhap he so da thuc: ";
        std::cin >> heSo;
    }

    void xuat() {
        std::cout << heSo << "x^" << level << "\n";
    }

    // Toán tử cộng
    DaThuc operator+(const DaThuc& other) const {
        DaThuc result;
        result.level = std::max(level, other.level);
        result.heSo = heSo + other.heSo;
        return result;
    }

    // Toán tử trừ
    DaThuc operator-(const DaThuc& other) const {
        DaThuc result;
        result.level = std::max(level, other.level);
        result.heSo = heSo - other.heSo;
        return result;
    }
};

int main() {
    DaThuc a, b, tong, hieu;

    std::cout << "Nhap thong tin cho da thuc a:\n";
    a.nhap();
    std::cout << "Da thuc a: ";
    a.xuat();

    std::cout << "\nNhap thong tin cho da thuc b:\n";
    b.nhap();
    std::cout << "Da thuc b: ";
    b.xuat();

    // Thực hiện cộng và trừ hai đa thức
    tong = a + b;
    hieu = a - b;

    // Xuất kết quả ra màn hình
    std::cout << "\nTong hai da thuc: ";
    tong.xuat();
    std::cout << "\nHieu hai da thuc: ";
    hieu.xuat();

    return 0;
}
