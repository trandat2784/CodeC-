#include<iostream>
#include<math.h>
using namespace std;
class TamGiac {
	public:
	TamGiac (){
		
	}
	float c1,c2,c3;
    float dienTich;
	void nhap(){
		while(c1+c2<=c3||c1+c3<=c2||c3+c2<=c1)
		{
		  cout<<"Nhap canh 1 :";
	      cin>>c1;
		  cout<<"Nhap canh 2 :";
		  cin>>c2;
		  cout<<"Nhap canh 3 :";
		  cin>>c3;
	    }
	  float p=(c1+c2+c3)/2; 
	  dienTich=sqrt(p*(p-c1)*(p-c2)*(p-c3)) ;
	}
	float chuVi(){
		return c1+c2+c3;
	}

	void xuat(){
		cout<<c1<<"  "<<c2<<"  "<<c3<<"  "<<dienTich<<"  "<<chuVi()<<endl;
	}
	
	~TamGiac(){
		
	}
};
main(){
	int i,j,n;
	float temp;
	cout<<"Nhap vao so luong tam giac";
	cin>>n;
	TamGiac tg[n];
	for(i=0;i<n;i++)
	 {
	 	cout<<"Nhap tam giac thu "<<i+1<<endl;
	 	tg[i].nhap();
	 	tg[i].xuat();
	 }
	for(i=0;i<n-1;i++)
	 for(j=1;j<n;j++)
	 {
		if(tg[i].dienTich<tg[j].dienTich){
			temp=tg[i].dienTich;
			tg[i].dienTich=tg[j].dienTich;
			tg[j].dienTich=temp;
		}
	 }
	for(i=0;i<n;i++)
	 {
	 	cout<<"Sap xep tam giac"<<endl;
	 	tg[i].xuat();
	 }
	
}