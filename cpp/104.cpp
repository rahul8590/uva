//Arbitrage Problem

#include<iostream>

using namespace std;

int **const_matrix(int rows , int cols) {
  int **mat = new int*[rows];
  for (int i = 0 ; i < rows ; i++ ) {
          mat [i] = new int [cols]; 
          for (int j = 0 ; j < cols ; j++ ){
            mat[i][j] = 0;
          }
  }
  return mat ;
}

int main() {
	int rows, cols , **mat1;

		while(cin >> rows >> cols) {   
		mat1 = const_matrix(rows,cols);	
		
		for (int i = 0 ; i < rows ; i++ ) {
    	for (int j = 0 ; j < cols; j++) {
      	cin >> mat1[i][j] ;
    	}
   }

		   


   //Code to delete the arrays 
   for( int i=0; i<rows; ++i ) {
  		delete[] mat1[i];
		}
		delete[] mat1;   
 }
	return 0;
}

