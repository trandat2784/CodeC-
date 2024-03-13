//Bai12
using namespace std;
#include<iostream>

class Matrix {
	private:
    int matrix[20][20];
    int n,m;
    
	
	public:
	
	Matrix(){
		
	}	
	
	void nhap(){
	   int j, i;
	   cout<<"Nhap so hang ";
	   cin>>n;
	   cout<<"Nhap so cot ";
	   cin>>m;
	   for(i=0;i<n;i++)
	   {
	   	for(j=0;j<m;j++)
	       {
	       	cout<<"Nhap gia tri cho  ";
	       	cin>>matrix[i][j];
		   }
	
	   }
	     
     }
     
    void xuat(){
       int j, i;
	   for(i=0;i<n;i++){
	   	 for(j=0;j<m;j++)
	       {
	       	cout<<matrix[i][j]<<" ";
	       	
		   }
		   cout<<"\n";
	   }
	    
	}
	void check(){
		int i ,j;
		  for(j=0;j<=m;j++)
	        {
	    
	        	cout<<matrix[0][i]<<""<<matrix[n][i];
			}
	}
	int sumBorder ()
	  {
	  	int i,j,sum_1=0,sum_2=0,sum;
	      for(j=0;j<m;j++)
	        {
	        	sum_1+=matrix[0][j]+matrix[n-1][j];
	        	
			}
		  for(i=1;i<n-1;i++)
		  {
		  	sum_2+= matrix[i][0]+matrix[i][m-1];
		  }
	  	return sum_1+sum_2;
	  }
	
	
};

main(){
	Matrix mt ;
    mt.nhap();
    mt.xuat();
    
    cout<<mt.sumBorder();
}