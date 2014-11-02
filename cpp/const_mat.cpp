#include<iostream>
using namespace std;

int **const_matrix(int rows , int cols) {
  int **mat = new int *[rows];
  for (int i = 0 ; i < rows ; i++ ) {
          mat [i] = new int [cols]; 
          for (int j = 0 ; j < cols ; j++ ){
            mat[i][j] = 0;
          }
  }
  return mat ;
}



int main() {
  int rows,cols, **mat;
  cin >> rows >> cols ;
  mat = const_matrix(rows,cols);
  
  cout << " the random matrix is " ;
  for (int i = 0 ; i < rows ; i++ ) {
    for (int j = 0 ; j < cols; j++) {
      cout << mat[i][j] << " " ;
    }
    cout << endl;
   }
  return 0;
}

