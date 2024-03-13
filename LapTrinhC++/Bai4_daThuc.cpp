//using namespace std;
//#include<iostream>
//class daThuc {
//	public:
//	int level;
//	int heSo;
//	daThuc(){
//		
//	}
//	void nhap (){
//		cout<<"Nhap bac da thuc";
//		cin>>level;
//		cout<<"Nhap he so da thuc";
//		cin>>heSo;
//	}
//	void xuat(){
//		cout<<heSo<<"x^"<<level<<"\n";
//	}
//};
//
//main(){
//	daThuc a ;
//	a.nhap();
//	a.xuat();
//}
#include <iostream>
#include <vector>

class DaThuc {
private:
    int bac;
    std::vector<double> heSo;

public:
    DaThuc() : bac(0) {}

    DaThuc(int bac, const std::vector<double>& heSo) : bac(bac), heSo(heSo) {}

   void Nhap() {
        std::cout << "Nhap bac cua da thuc: ";
        std::cin >> bac;

        heSo.resize(bac + 1);  // Đảm bảo kích thước đủ để chứa các hệ số

        for (int i = bac; i >= 0; --i) {
            std::cout << "Nhap he so tai bac " << i << ": ";
            std::cin >> heSo[i];
        }
    }
    DaThuc operator+(const DaThuc& other) const {
        int bacKetQua = std::max(bac, other.bac);
        std::vector<double> heSoKetQua(bacKetQua + 1, 0);


    // cong co ban than truoc 
        for (int i = 0; i <= bac; ++i) {
            heSoKetQua[i] += heSo[i];
//            hskq 1= 
        }

        

        for (int i = 0; i <= other.bac; ++i) {
            heSoKetQua[i] += other.heSo[i];
        }

        return DaThuc{bacKetQua, heSoKetQua};
    }

    void xuatDaThuc() const {
        std::cout << "Da thuc: ";
        for (int i = bac; i >= 0; --i) {
            if (i == bac) {
                std::cout << heSo[i] << "x^" << i << " ";
            } else if (i == 0) {
                std::cout << "+ " << heSo[i] << " ";
            } else {
                std::cout << "+ " << heSo[i] << "x^" << i << " ";
            }
        }
        std::cout << std::endl;
    }
};

int main() {
//    DaThuc daThuc1{4, {1, 7, 5,4}};  // Da thuc: 1x^2 + 2x^1 + 3
//    DaThuc daThuc2{3, {4, 5, 6, 7}};  // Da thuc: 4x^3 + 5x^2 + 6x^1 + 7
//    DaThuc daThuc3{2, {2, 3, 4}};  // Da thuc: 2x^2 + 3x^1 + 4

    DaThuc daThuc1,daThuc2;
    std::cout << "Da thuc 1:\n";
    daThuc1.Nhap();
    daThuc1.xuatDaThuc();

    std::cout << "Da thuc 2:\n";
    daThuc2.Nhap();
    daThuc2.xuatDaThuc();

//    std::cout << "Da thuc 3:\n";
//    daThuc3.xuatDaThuc();

    DaThuc tong = daThuc1 + daThuc2 ;

    std::cout << "Tong ba da thuc:\n";
    tong.xuatDaThuc();

    return 0;
}
