//Minimum exchange of $ between students 
#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;


double dtrunc(double f) {
	return floor(f * 100) / 100 ;
}

int main(){
	int num;
	double sum, icost, ecost;
	while (cin >> num && num != 0){
		float *cost = new float[num] ;
		ecost = 0.00;
		sum = 0.00;
		//cout<<setprecision(2) << fixed;
		for (int i = 0 ; i < num ; i++){
			cin >> cost[i];
			sum = (double)(long)((sum+cost[i]) * 100.0) / 100.0;
		}
		//sum = dtrunc(sum);
		icost = (double)(long)sum / num ;
		//icost = trunc(icost);

		//cout <<"icost is " << icost  ;

		for (int i = 0; i < num ; i++){
			if (cost[i] >= icost)
				continue;
			else {
				ecost += icost - cost[i];
				//cout <<"ecost" << ecost <<endl;
			}
		}
		cout<<"$"<<setprecision(2) << fixed << ecost<<endl;
	}
	return 0;
}