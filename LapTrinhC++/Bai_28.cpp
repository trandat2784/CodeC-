#include <iostream>
#include <cmath>
using namespace std;

class Diem {
public:
    float x, y;

    Diem(float x, float y) {
        this->x = x;
        this->y = y;
    }
    Diem (){
    	
	}
     void nhapDiem() {
        cout << "Nhap toa do x :";
        cin >> x;
        cout << "Nhap toa do y :";
        cin >> y;
    }
};

class TamGiac {
public:
    Diem diem1, diem2, diem3;
    float c1, c2, c3;

    TamGiac(const Diem& d1, const Diem& d2, const Diem& d3) : diem1(d1), diem2(d2), diem3(d3) {
        c1 = kcDiem(diem1, diem2);
        c2 = kcDiem(diem2, diem3);
        c3 = kcDiem(diem3, diem1);
    }
    TamGiac() {
	}

    float kcDiem(Diem d1, Diem d2) {
        return sqrt(pow((d2.x - d1.x), 2) + pow((d2.y - d1.y), 2));
    }

    void nhapTg() {
        cout << "Nhap diem 1 ";
        diem1.nhapDiem();
        cout << "Nhap diem 2 ";
        diem2.nhapDiem();
        cout << "Nhap diem 3 ";
        diem3.nhapDiem();
        
        c1 = kcDiem(diem1, diem2);
        c2 = kcDiem(diem2, diem3);
        c3 = kcDiem(diem3, diem1);
    }

    void xuatCanh() {
        cout << c1 << "  " << c2 << "  " << c3 << endl;
    }
    void kiemTraTamGiac(){
    	if(c1==c2&&c2==c3)
    	  {
    	  	cout<<"La tam giac deu";
		  }
		else if()
	}
};

int main() {
    TamGiac tg;
    tg.nhapTg();
    tg.xuatCanh();

    return 0;
}
