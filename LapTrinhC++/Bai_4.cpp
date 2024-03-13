using namespace std;
#include<iostream>
class NhanSu{
	protected:
    char  Mnv [20];
    char Name[20];
	int year;
	
	public: NhanSu(){
		
	}
	protected:
	void nhap(){
		cout<<"Nhap ma nhan vien";
		cin.ignore(1);
		cin.get(Mnv,20);
		cout<<"Nhap ten nhan vien";
		cin.ignore(1);
		cin.get(Name,20);
		cout<<"Nhap nam sinh";
		cin>>year;
	}
	
	void xuat(){
		cout<<Mnv<<"  "<<Name<<"  "<<year;
	}
	
};
class CanBo: NhanSu{
	public: 
	int Salary;
	int NumberSalary ;
	int SalaryReal= NumberSalary*Salary;
	void nhap_cb(){
		NhanSu::nhap();
		cout<<"Nhap luong";
		cin>>Salary;
		cout<<"Nhap he so luong";
		cin>>NumberSalary;
	}
	
	void xuat_cb(){
    NhanSu::xuat();
	cout<<Salary<<"  "<<NumberSalary;
	}
	
};

main(){
	int i,n,j,temp;
	cout<<"Nhap so can bo";
	cin>>n;
	CanBo cb[10];
	for(i=0;i<=n;i++)
	 {
	   cb[i].nhap_cb();
       
	 }
	for(i=0;i<n-1;i++)
	  for(j=i+1;j<n;j++)
	  {
	  	if(cb[i].SalaryReal<cb[j].SalaryReal){
		  
	  	 temp=cb[j].SalaryReal;
	  	 cb[j].SalaryReal=cb[i].SalaryReal;
	  	 cb[i].SalaryReal=temp;
	       }
	  }
  
    for(i=0;i<=n;i++)
      {
      	cb[i].xuat_cb();
	  }
	

}