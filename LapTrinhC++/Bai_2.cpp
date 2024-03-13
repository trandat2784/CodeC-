using namespace std;
#include<iostream>
class ThiSinh{
	char Msv[20];
	char Name[20];
	float toan, ly, hoa;
	public:
	void nhap(){
		cout<<"Nhap Msv";
		cin.ignore(1);
		cin.get(Msv,20);
		cout<<"Nhap Ho Ten ";
		cin.ignore(1);
		cin.get(Name,20);
		cout<<"Nhap diem toan ";
		cin>>toan;
		cout<<"Nhap diem ly ";
		cin>>ly;
		cout<<"Nhap diem hoa ";
		cin>>hoa;
	}
	void inTT(){
		cout<<Msv<<" "<<Name<<" "<<toan<<" "<<ly<<" "<<hoa;
		
	}
	float SumPoint(){
		float Sum=toan+ly+hoa;
		return Sum;
	}
	
};
main(){
	int i,n;
	ThiSinh sv[10];
	cout<<"Nhap so luong thi sinh";
	cin>>n;
	for(i=0;i<n;i++)
	{
		
		sv[i].nhap();
		sv[i].inTT();
		cout<<endl;
	}
//	for(i=0;i<n;i++)
//	{
//		float max=0;
//		max=sv[0].SumPoint();
//		if(sv[i].SumPoint()>max)
//		  {
//		  	max=sv[i].SumPoint();	  	
//		  }
//	}
    int maxIndex = 0;
    for (i = 1; i < n; i++) {
        if (sv[i].SumPoint() > sv[maxIndex].SumPoint()) {
            maxIndex = i;
        }
    }
    cout<<"Thi sinh co diem cao nhat"
	sv[maxIndex].inTT();	
}