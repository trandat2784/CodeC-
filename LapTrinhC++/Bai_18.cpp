#include<iostream>
using namespace std;
class MonHoc {
	public :
		MonHoc(){
			
		}
	char tenMon[20];
	float cc;
	float kt;
	float dt;
	void nhap(){
		cout<<"Nhap ten mon \n";
		cin.ignore(1);
		cin.get(tenMon,20);
		cout<<"Nhap diem chuyen can \n";
		cin>>cc;
		cout<<"Nhap diem kiem tra \n";
		cin>>kt;
		cout<<"Nhap diem thi  \n";
		cin>>dt;
	
	}
	float diemHP(){
		return (cc*0.1)+(kt*0.3)+(dt*0.6);
	}
	
	void xuat (){
		cout<<tenMon<<"  "<<cc<<"  "<<kt<<"  "<<dt<<"  "<<diemHP()<<"  ";
	}
	
	
};
class SinhVien:public MonHoc{
	public :
		SinhVien(){
			
		}
	char ht[20];
	char lop[10];
	char msv[10];
	void nhap(){
		MonHoc::nhap();
		cout<<"Nhap ho ten \n";
		cin.ignore(1);
		cin.get(ht,20);
		cout<<"Nhap lop \n";
		cin.ignore(1);
		cin.get(lop,10);
		cout<<"Nhap ma sinh vien \n";
		cin.ignore(1);
		cin.get(msv,10);
		
	}
	void xuat(){
		MonHoc::xuat();
		cout<< ht<<" "<<lop<<" "<<msv<<endl;
	}
	
};
main(){
	int n=0,i;
	cout<<"Nhap so luong sinh vien";
	cin>>n;
	SinhVien sv[20];
	for(i=0;i<n;i++)
	{
		sv[i].nhap();
     	sv[i].xuat();
	}
	for(i=0;i<n;i++)
	 {
	 	if(sv[i].cc<5||sv[i].kt<5){
             sv[i].xuat();	 		
		 }
	 }
	

}