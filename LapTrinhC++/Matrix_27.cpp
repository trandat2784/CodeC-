//////Bai12
////using namespace std;
////#include<iostream>
////
////class Matrix {
////	private :    
////	int n,m;
////	public:
////
////    int matrix[20][20];
////	Matrix(){
////		
////	}	
////	
////	void nhap(){
////	   int j, i;
////	   cout<<"Nhap so hang ";
////	   cin>>n;
////	   cout<<"Nhap so cot ";
////	   cin>>m;
////	   for(i=0;i<n;i++)
////	   {
////	   	for(j=0;j<m;j++)
////	       {
////	       	cout<<"Nhap gia tri cho  ";
////	       	cin>>matrix[i][j];
////		   }
////	
////	   }
////	     
////     }
////     
////    void xuat(){
////       int j, i;
////	   for(i=0;i<n;i++){
////	   	 for(j=0;j<m;j++)
////	       {
////	       	cout<<matrix[i][j]<<" ";
////	       	
////		   }
////		   cout<<"\n";
////	   }
////	    
////	}
////   friend 	Matrix minusMatrix( Matrix mt_2 );	
////};
////Matrix minusMatrix (Matrix mt_2){
////	int i,j;
////		Matrix mt_3;
////		mt_3.m=m;
////		mt_3.n=n;
////		for (i=0;i<n;i++)
////		 for(j=0;j<m;j++)
////		   {
////		   	 mt_3.matrix[i][j]= matrix[i][j]+mt_2.matrix[i][j];
////		   	 
////		   }
////		return mt_3;
////}
////main(){
////	Matrix mt, mt_2,mt_3 ,mt_4;
////    mt.nhap();
////    mt.xuat();
////    mt_2.nhap();
////    mt_2.xuat();
////    mt_3=mt.minusMatrix(mt_2);
////    mt_3.xuat();
////    
////    
////}
//#include<iostream>
//using namespace std;
//
//class Matrix {
//private:
//    int n, m;
//
//public:
//    int matrix[20][20];
//
//    Matrix() {}
//
//    void nhap() {
//        cout << "Nhap so hang: ";
//        cin >> n;
//        cout << "Nhap so cot: ";
//        cin >> m;
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cout << "Nhap gia tri cho [" << i << "][" << j << "]: ";
//                cin >> matrix[i][j];
//            }
//        }
//    }
//
//    void xuat() {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cout << matrix[i][j] << " ";
//            }
//            cout << "\n";
//        }
//    }
//
// friend Matrix minusMatrix(Matrix mt_2);
//};
//
// Matrix minusMatrix(Matrix mt_2) {
//    Matrix mt_3;
//    mt_3.m = m;
//    mt_3.n = n;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++) {
//            mt_3.matrix[i][j] = matrix[i][j] - mt_2.matrix[i][j];
//        }
//    return mt_3;
//}
//
//int main() {
//    Matrix mt, mt_2, mt_3;
//
//    cout << "Nhap ma tran thu nhat:\n";
//    mt.nhap();
//    cout << "Ma tran thu nhat:\n";
//    mt.xuat();
//
//    cout << "Nhap ma tran thu hai:\n";
//    mt_2.nhap();
//    cout << "Ma tran thu hai:\n";
//    mt_2.xuat();
//
//    mt_3 = mt.minusMatrix(mt_2);
//    cout << "Ket qua tru hai ma tran:\n";
//    mt_3.xuat();
//
//    return 0;
//}
#include <iostream>
using namespace std;

class Matrix {
private:
    int n, m;

public:
    int matrix[20][20];

    Matrix() {}

    void nhap();
    void xuat();
    friend Matrix truMatran(const Matrix& mt_1, const Matrix& mt_2);
};

void Matrix::nhap() {
    cout << "Nhap so hang: ";
    cin >> n;
    cout << "Nhap so cot: ";
    cin >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Nhap gia tri cho [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void Matrix::xuat() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

Matrix truMatran(const Matrix& mt_1, const Matrix& mt_2) {
    Matrix mt_3;
    mt_3.m = mt_1.m;
    mt_3.n = mt_1.n;
    for (int i = 0; i < mt_1.n; i++) {
        for (int j = 0; j < mt_1.m; j++) {
            mt_3.matrix[i][j] = mt_1.matrix[i][j] - mt_2.matrix[i][j];
        }
    }
    return mt_3;
}

int main() {
    Matrix mt, mt_2, mt_3;

    cout << "Nhap ma tran thu nhat:\n";
    mt.nhap();
    cout << "Ma tran thu nhat:\n";
    mt.xuat();

    cout << "Nhap ma tran thu hai:\n";
    mt_2.nhap();
    cout << "Ma tran thu hai:\n";
    mt_2.xuat();

    mt_3 = truMatran(mt, mt_2);
    cout << "Ket qua tru hai ma tran:\n";
    mt_3.xuat();

    return 0;
}
