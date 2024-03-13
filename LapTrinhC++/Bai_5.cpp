
using namespace std;
#include<iostream>
class Date{
	private:
		int day,month,year ;
	public:
	Date(){
		
	}
	Date(int ngay, int thang ,int nam)
	  {
	  	day=ngay;
	  	month=thang;
	  	year=nam;
	  }
	
	void nhap(){
		cout<<"Nhap ngay";
		cin>>day;
		while(day>31)
		 {
		 	cout<<"Nhap lai ngay";
		 	cin>>day;
		 	if(day>32)
		 	 break;
		 }
		cout<<"Nhap thang";
		cin>>month;
		while(month>12)
		 {
		 	cout<<"Nhap lai thang";
		 	cin>>month;
		 	if(month<13)
		 	 break;
		 }
		cout<<"Nhap nam";
		cin>>year;
		cout<<endl;
	}
	void xuat(){
		cout<<day<<"  "<<month<<"  "<<year;
	}
    
    void normalize(){
    	cout<<day<<"-"<<month<<"-"<<year;
	}
	Date operator++(){
		day++;
		return *this;
	}
	Date operator--(){
		day--;
		return *this;
	}
	
//	int day(){
//		return day;
//	}
	
	~Date(){
		
	}
	
};


main(){
	Date date_1;
	date_1.nhap();
	++date_1;
	
	date_1.normalize();	
	
}