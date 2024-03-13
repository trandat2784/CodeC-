using namespace std;
#include<iostream>
#include<cmath>
#include<algorithm>

class Triangle{
	public : 
	double c_1,c_2,c_3;
	double p = chuVi()/2;
	double dt=sqrt(p * (p - c_1) * (p - c_2) * (p - c_3));
	Triangle(){
		
	}
	Triangle(double canh_1,double canh_2,double canh_3){
		c_1=canh_1;
		c_2=canh_2;
		c_3=canh_3;
	}
	void nhap(){

		do{
		cout<<"Nhap canh 1 :";
		cin>>c_1;
		cout<<"Nhap canh 2 : ";
		cin>>c_2;
		cout<<"Nhap canh 3 : ";
		cin>>c_3;
		  if(!checkTriangle())
		   {
		   	cout<<"Nhap lai tam giac";
		   }
		}while(!checkTriangle());
	}
	
	void xuat(){
		cout<<c_1<<"  "<<c_2<<"  "<<c_3<<"\n";
	}
	
	bool checkTriangle(){
		return (c_1+c_2>c_3)&&(c_1+c_3>c_2)&&(c_3+c_2>c_1);
		
	}
	
	double chuVi(){
		return c_1+c_2+c_3;
	}
	
//	double dienTich(){
//		double p = chuVi() / 2;
//        return sqrt(p * (p - c_1) * (p - c_2) * (p - c_3));
//	}
	
	
	~Triangle (){
		
	}
};



main(){
	Triangle tgl_1[10] ;
	int n,i,j;
	cout<<"Nhap gia tri cho n";
	cin>>n;
	double temp;
	for(i=0;i<n;i++)
	  {
	  	tgl_1[i].nhap();
	  	tgl_1[i].xuat();
	  }
	for(i=0;i<n-1;i++)
	 for(j=i+1;j<n-1;j++)
	   {
	   	if(tgl_1[i].dt>tgl_1[j].dt)
          {
          	temp=tgl_1[i].dt;
          	tgl_1[i].dt = tgl_1[j].dt;
          	tgl_1[j].dt=temp;

		  }
	   }
	for (i=0;i<n;i++)
	  {
	  	tgl_1[i].xuat();
	  	cout<<"\n";
	  }

}