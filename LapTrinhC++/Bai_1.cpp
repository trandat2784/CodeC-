using namespace std;
#include <iostream>

class PhanSo {
	private:
	int ts,ms;
	public:
	void nhap (){
		cout<<"nhap tu so";
		cin>>ts;
		cout<<"Nhap mau so";
		cin>>ms;
		
	}
	void inTT (){
		cout<<ts<<"/"<<ms;
		
	}
	
	int Ucln(int a,int b){
	 
	 while(a!=b)
	  {
	  	if(a>b)
	  	{
	  		a=a-b;
		  }
		else
		 {
		 	b=b-a;
		 }
		 
	  }
	  return a;
	}
	
	PhanSo RutGon (PhanSo a){
		int uc=Ucln(a.ts,a.ms);
		a.ms=a.ms/uc;
		a.ts=a.ts/uc;
		return a;
	
	}
	
	PhanSo Sum(PhanSo b){
		PhanSo c,d;
		c.ts= b.ms*ts+b.ts*ms;
		c.ms=ms*b.ms ;
		d =RutGon(c);
        return d;
	}
	
};

main(){
 PhanSo ps_1,ps_2,Sum;
 ps_1.nhap();
 ps_2.nhap();
 Sum = ps_1.Sum(ps_2);
 Sum.inTT();

}