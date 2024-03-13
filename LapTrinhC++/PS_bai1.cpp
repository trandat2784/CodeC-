using namespace std;
#include<iostream>
class PhanSo {
	public:
	int tu, mau;
	PhanSo(){
		
	}
	PhanSo (int ps_tu,int ps_mau)
	  {
	  	tu = ps_tu;
	  	mau=ps_mau;
	  }
	void nhap(){
		cout<< "Nhap tu so ";
		cin>>tu;
		cout<<"Nhap mau so ";
		cin>>mau;
	}
	void xuat(){
        if(tu<0||mau<0)
          {
          	cout<<"-";
		  }
	    rutGon();
       
		cout<<tu<<"/"<<mau<<"\n";
	}
	int ucln (){
//		if(tu==0||mau==0)
//		 return 1;
      int a=tu,b=mau;
		while(a!=b)
		 {
		 	if(a>b)
		 	 {
		 	    a-=b;
			  }
			else
			   b-=a;
		 }
		 return a;
	}
    void rutGon(){
        int a = ucln();
        tu = tu/a;
        mau=mau/a;
	}
	PhanSo operator + (PhanSo ps_2){
		PhanSo ps_3;
	    ps_3.tu= ps_2.mau*tu+ps_2.tu*mau;
	    ps_3.mau=ps_2.mau*mau;
	    return ps_3;
	}
	PhanSo operator - (PhanSo ps ){
		PhanSo ps_3; 
		ps_3.tu=tu*ps.mau-ps.tu*mau;
		ps_3.mau= mau*ps.mau;
		return ps_3;
	}
	PhanSo operator * (PhanSo ps)
	  {
	  	PhanSo ps_3;
	  	ps_3.tu = ps.tu*tu;
	  	ps_3.mau=ps.mau*mau;
	  	return ps_3;
	  }
	PhanSo operator / (PhanSo ps)
	  {
	  	PhanSo ps_3;
	  	ps_3.tu= tu*ps.mau;
        ps_3.mau= mau *ps.tu;
        return ps_3;
	   }
	
};
 main(){
	PhanSo ps,ps_1,ps_2;
	ps.nhap();
	ps.xuat();
	ps_1.nhap();
	ps_1.xuat();
	ps_2=ps_1-ps;
	ps_2.xuat();
	ps_2=ps_1*ps;
	ps_2.xuat();
	ps_2=ps_1/ps;
	ps_2.xuat();
}