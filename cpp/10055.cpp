#include<iostream>
using namespace std;
int main()
{
    unsigned long long  a , b ,c;
      while(cin >> a >> b) {
          c = ((a > b ? a - b : b - a)) ;
            cout << c; 
              }
        return 0;
}

