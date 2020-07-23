#include<iostream>
using namespace std;

int main()
{
	long int n, count=0, sum1=0, sum2=0, sum3=0;
	cin >> n;
	while(count < n){
		int x, y, z;
		cin >> x;
		sum1 += x;
		count++;
		if(count >= n)
			break;
		cin >> y;
		sum2 += y;
		count++;
		if(count >= n)
			break;
		cin >> z;
		sum3 += z;
		count++;
	}
	cout << sum1 << " " << sum2 << " " << sum3;
	return 0;
}
