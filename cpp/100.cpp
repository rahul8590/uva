// Maximum Cycle Length between nos i and j 
#include<iostream>
using namespace std;

int clength (int end ) {
  int count = 1 ;
  while ( end > 1) {
    if (end % 2 != 0) { end = 3*end + 1  ; }
    else { end = end / 2 ; }
    count++;
  }
  return count ;
 }


int main() {
  int s, e, max, val;
  int os , oe;
  while ( cin >> s >> e ) {
    max = 0;
    os = s ;
    oe = e ;
    if ( s > e ) {
      int t = s ;
      s = e ;
      e = t ;
    }
    for (int i = s ; i <= e ; i++) {
      val  = clength(i);
      if (val > max ) { max = val; }  
    }
    cout << os <<" "<< oe <<" "<< max << endl ;
  }
  return 0;
 }


