#include <iostream>
#include <cmath>

using namespace std;

class SP1 {
public:
	SP1(){
		
	}
	SP1(float ao, float thuc){
		this->ao=ao;
		this->thuc=thuc;
	}
	float ao ,thuc;
	void nhap(){
		cout<<"Nhap phan thuc ";
		cin>>thuc;
		cout<<"Nhap phan ao";
		cin>>ao;
	}
	void xuat(){
		if(ao>0){
			cout<<thuc<<"+"<<ao<<"i"<<endl;
		}
		else{
			cout<<thuc<<ao<<"i"<<endl;
		}
 
	}	
	float module (){
		return sqrt(thuc*thuc +ao*ao);
	}
   
};
class SP2 : public   SP1{
	public: 
	SP2 (float thuc, float ao){
		this->thuc=thuc;
		this->ao=ao;
	}
	SP2(){
	}
	
	// a=b=c 
	SP2 operator = ( SP2 assign  ){
		thuc = assign.thuc;
		ao = assign.ao;
		return *this ;
	}

	bool operator < (SP2 temp){
		return module()<temp.module();
	}
	
	SP2 operator + ( SP2 assign ){
		SP2 result;
		result.thuc = thuc+ assign.thuc;
		result.ao=ao+assign.ao;
		return result ;
	}
	
};



int main(){
	SP2 sp1,sp2,sp3;
    sp1.nhap();
    sp1.xuat();
    sp2.nhap();
    sp2.xuat();
    if(sp2 <sp1)
      {
      	cout<<"true";
	  }
	else 
	 {
	 	cout<<"flase";
	 }
	 sp3=sp1+sp2;
	 sp3.xuat();
	return 0;
}


