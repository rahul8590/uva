#include<iostream>
#include<array>

using namespace std;
int main()
{
	int  a,b,prem;
	array <int,3> c;
	cin >> a ;
	while (cin>>b)
	{
		prem = 0;
		for (int i = 0; i < b ; i ++){
			cin >>c[0] >>c[1] >>c[2];		
			prem += c[0] * c[2];
		}
		cout << prem << endl;
	}
	return 0;
}

