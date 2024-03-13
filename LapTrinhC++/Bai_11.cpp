using namespace std;
#include<iostream>
class Matrix{
	public :int level; 
	int matrix[20][20];
	int n,m;
	
	void nhap(){
		int i,j;
		cout<<"Nhap so dong";
		cin>>n;
		cout<<"Nhap so cot";
		cin>>m;
		for (i=0;i<n;i++)
		 {
		 	for(j=0;j<m;j++)
		 	  {
		 	  	cout<<"Nhap gia tri cho ";
		 	  	cin>>matrix[i][j];
			   }
		 }
	}
	void xuat(){
		int i,j;
		for (i=0;i<n;i++)
		 {
		 	for(j=0;j<m;j++)
		 	  {
		 	  	cout<<matrix[i][j] <<" ";
		 	  	
			   }
			   cout<<"\n";
		 }
	}
	int sumMain(){
		int sum=0,i,j;
		for(i=0;i<n;i++)
		  {
		  	sum= sum+ matrix[i][i];
		  }
		return  sum;
	}
	int sumSecondary(){
		int sum=0,i,j;
		for(i=0;i<n;i++)
		   {
		   	sum=sum+matrix[i][n-1-i];
		   }
		   return sum;
	}
};
int main(){
	Matrix mt;
	mt.nhap();
	mt.xuat();
	cout<<mt.sumMain();
	cout<<"\n";
	cout<<mt.sumSecondary();
}