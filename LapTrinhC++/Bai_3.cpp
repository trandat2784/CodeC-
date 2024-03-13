#include<iostream >
using namespace std;
class SP {
	public:
	float thuc,ao;
	SP(){
		
	}
	friend ostream& operator << (ostream& os , SP& sp);
	friend istream& operator >>(istream& is , SP& sp);
};

   ostream& operator<<(ostream& os, SP& sp ) {
    os << sp.thuc << " + " << sp.ao << "i";
    return os;
    }
	  
    istream& operator>>(istream& is, SP& sp) {
      cout << "Nhap phan thuc: ";
      is >> sp.thuc;
      cout << "Nhap phan ao: ";
      is >> sp.ao;
      return is;
    }
main(){

	SP sp;
	cin>>sp;
	cout<<sp;
}


//#include <iostream>
//
//class SoPhuc {
//private:
//    double phanThuc;
//    double phanAo;
//
//public:
//    // Hàm tạo không đối
//    SoPhuc() : phanThuc(0.0), phanAo(0.0) {}
//
//    // Hàm tạo có đối
//    SoPhuc(double thuc, double ao) : phanThuc(thuc), phanAo(ao) {}
//
//    // Hàm hủy
//    ~SoPhuc() {
//        // Có thể thêm xử lý hủy đối tượng nếu cần
//    }
//
//    // Toán tử nhập xuất
//    friend std::ostream& operator<<(std::ostream& os, const SoPhuc& soPhuc);
//    friend std::istream& operator>>(std::istream& is, SoPhuc& soPhuc);
//
//    // Toán tử cộng, trừ, nhân, chia
//    SoPhuc operator+(const SoPhuc& other) const {
//        return SoPhuc(phanThuc + other.phanThuc, phanAo + other.phanAo);
//    }
//
//    SoPhuc operator-(const SoPhuc& other) const {
//        return SoPhuc(phanThuc - other.phanThuc, phanAo - other.phanAo);
//    }
//
//    SoPhuc operator*(const SoPhuc& other) const {
//        double thucMoi = phanThuc * other.phanThuc - phanAo * other.phanAo;
//        double aoMoi = phanThuc * other.phanAo + phanAo * other.phanThuc;
//        return SoPhuc(thucMoi, aoMoi);
//    }
//
//    SoPhuc operator/(const SoPhuc& other) const {
//        double mau = other.phanThuc * other.phanThuc + other.phanAo * other.phanAo;
//        double thucMoi = (phanThuc * other.phanThuc + phanAo * other.phanAo) / mau;
//        double aoMoi = (phanAo * other.phanThuc - phanThuc * other.phanAo) / mau;
//        return SoPhuc(thucMoi, aoMoi);
//    }
//};
//
//std::ostream& operator<<(std::ostream& os, const SoPhuc& soPhuc) {
//    os << soPhuc.phanThuc << " + " << soPhuc.phanAo << "i";
//    return os;
//}
//
//std::istream& operator>>(std::istream& is, SoPhuc& soPhuc) {
//    std::cout << "Nhap phan thuc: ";
//    is >> soPhuc.phanThuc;
//    std::cout << "Nhap phan ao: ";
//    is >> soPhuc.phanAo;
//    return is;
//}
//
//int main() {
//    // Câu 1
//    SoPhuc sp1;  // Hàm tạo không đối
//    SoPhuc sp2(3.0, 4.0);  // Hàm tạo có đối
//
//    // Câu 2
//    std::cout << "Nhap so phuc sp1: ";
//    std::cin >> sp1;
//    std::cout << "So phuc sp1:
