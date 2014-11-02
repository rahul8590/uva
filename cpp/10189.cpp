#include<iostream>
#include<array>
using namespace std;

int **const_matrix(int rows , int cols) {
  int **mat = new int*[rows];
  for (int i = 0 ; i < rows ; i++ ) {
          mat [i] = new int [cols]; 
          for (int j = 0 ; j < cols ; j++ ){
            mat[i][j] = 2;
          }
  }
  return mat ;
}

int main() {
	int rows, cols , **mat1;

		while(cin >> rows >> cols) {   
		mat1 = const_matrix(rows,cols);	
		//auto mat1 = new int[rows][cols];
		//array <int,2> mat1 = array<int,2>(rows,cols);
		for (int i = 0 ; i < rows ; i++ ) {
    for (int j = 0 ; j < cols; j++) {
      cout << mat1[i][j] << " " ;
    }
    cout << endl;
   }
   //Code to delete the arrays 
   for( int i=0; i<rows; ++i ) {
  		delete[] mat1[i];
		}
		delete[] mat1;   
 }
	return 0;
}

