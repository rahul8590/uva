#include<iostream>
#include<string>

using namespace std;
int main()
{
	string s , astr ;	
	while(cin >> s) {
		for(string::iterator it=s.begin() ; it!=s.end(); ++it){
			int avalue = static_cast<int>(*it);
			avalue -= 7;
			char dec = static_cast<char>(avalue);
			cout<<dec;
		}
		cout <<endl;
	}	
	return 0;
}

