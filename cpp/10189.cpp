#include<iostream>

using namespace std;


char  **const_matrix(int rows , int cols) {
  char **mat = new char*[rows];
  for (int i = 0 ; i < rows ; i++ ) {
          mat [i] = new char [cols]; 
          for (int j = 0 ; j < cols ; j++ ){
            mat[i][j] = '0';
          }
  }
  return mat ;
}

char inchar(char num){
	if (num == '*')
		return num;

	int val = num ;
	val++;
	return char(val);
}



int main() {
	int rows, cols , count = 1;
	

		while(cin >> rows >> cols) {   
			if (rows == 0 && cols == 0)
				return 0;
			if (count > 1)
				cout << endl;

		char **mat1 = const_matrix(rows,cols);	
		
		for (int i = 0 ; i < rows ; i++ ) {
    		cin >> mat1[i] ;
   	}
		
		for (int i = 0 ; i < rows ; i++ )
    	for (int j = 0 ; j < cols; j++)
    		if (mat1[i][j] == '.'){
    			mat1[i][j] = '0' ; //Init to zero
    			//cout <<"detected dots";
    		}
    		
       	

		for (int i = 0 ; i < rows ; i++ ) {
    	for (int j = 0 ; j < cols; j++) {
      	if (mat1[i][j] == '*') {
      		if ( i - 1 >= 0 ) {
      			mat1[i-1][j-1] = inchar(mat1[i-1][j-1]) ;  //Top left 
      			mat1[i-1][j] = inchar(mat1[i-1][j]); //centre top
      			mat1[i-1][j+1] =  inchar(mat1[i-1][j+1]) ; //Top right 
      		}
      		if (i+1 < rows) {
      			mat1[i+1][j-1] = inchar(mat1[i+1][j-1]) ;  //Bottom left 
      			mat1[i+1][j] = inchar(mat1[i+1][j]) ; //centre Bottom
      			mat1[i+1][j+1] = inchar(mat1[i+1][j+1]) ; //Bottom right	
      		}
      	  if (j - 1 >= 0) {
      	  	mat1[i][j-1] = inchar(mat1[i][j-1]) ;  //Same left
      	  }
      	  if ( j + 1 < cols ) {
      	  	mat1[i][j+1] = inchar(mat1[i][j+1]);
      	  }

      	}

    	}
   }

   cout<<"Field"<<" "<<"#"<<count++<<":"<<endl;
   //Printing the complete minesweep
   for (int i = 0 ; i < rows ; i++ ) {
    	for (int j = 0 ; j < cols; j++)
    		cout << mat1[i][j] ;
    	cout << endl;
    }

    
   //Code to delete the arrays 
   /*for( int i=0; i<rows; ++i ) {
  		delete[] mat1[i];
		}
		delete[] mat1;   
		cout << "1st iteration is done";*/
 }
	return 0;
}

