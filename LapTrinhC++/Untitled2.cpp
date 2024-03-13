#include <iostream>
#include <cmath>

class Diem {
public:
    float x, y;

    Diem(float x = 0, float y = 0) : x(x), y(y) {}
};

class TamGiac:public Diem {
public:
    Diem diem1, diem2, diem3;
    float canh1, canh2, canh3;

    TamGiac(Diem d1, Diem d2, Diem d3) : diem1(d1), diem2(d2), diem3(d3) {
        canh1 = tinhKhoangCach(d1, d2);
        canh2 = tinhKhoangCach(d2, d3);
        canh3 = tinhKhoangCach(d3, d1);
    }

    float tinhKhoangCach(Diem d1, Diem d2) {
        return sqrt(pow(d2.x - d1.x, 2) + pow(d2.y - d1.y, 2));
    }

    void nhapDiem(Diem &diem) {
        std::cout << "Nhap toa do x: ";
        std::cin >> diem.x;
        std::cout << "Nhap toa do y: ";
        std::cin >> diem.y;
    }

    void xuatDiem(Diem diem, std::string ten_diem) {
        std::cout << ten_diem << "(" << diem.x << ", " << diem.y << ")";
    }

    void nhapTamGiac() {
        std::cout << "Nhap diem 1:\n";
        nhapDiem(diem1);
        std::cout << "Nhap diem 2:\n";
        nhapDiem(diem2);
        std::cout << "Nhap diem 3:\n";
        nhapDiem(diem3);
    }

    void xuatTamGiac() {
        std::cout << "Tam giac co 3 diem:\n";
        xuatDiem(diem1, "A");
        std::cout << "\n";
        xuatDiem(diem2, "B");
        std::cout << "\n";
        xuatDiem(diem3, "C");
        std::cout << "\n";
    }

    void kiemTraTinhChatTamGiac() {
        if (canh1 == canh2 && canh2 == canh3) {
            std::cout << "Tam giac la tam giac deu." << std::endl;
        } else if (canh1 == canh2 || canh2 == canh3 || canh3 == canh1) {
            if (canh1 * canh1 + canh2 * canh2 == canh3 * canh3 ||
                canh2 * canh2 + canh3 * canh3 == canh1 * canh1 ||
                canh3 * canh3 + canh1 * canh1 == canh2 * canh2) {
                std::cout << "Tam giac la tam giac vuong can." << std::endl;
            } else {
                std::cout << "Tam giac la tam giac can." << std::endl;
            }
        } else if (canh1 * canh1 + canh2 * canh2 == canh3 * canh3 ||
                   canh2 * canh2 + canh3 * canh3 == canh1 * canh1 ||
                   canh3 * canh3 + canh1 * canh1 == canh2 * canh2) {
            std::cout << "Tam giac la tam giac vuong." << std::endl;
        } else {
            std::cout << "Tam giac la tam giac thuong." << std::endl;
        }
    }
};

int main() {
    TamGiac tg;

    tg.nhapTamGiac();
    tg.xuatTamGiac();
    tg.kiemTraTinhChatTamGiac();

    return 0;
}
