#include<iostream>
using namespace std;

int main()
{
	int d;
	int toffees = 0;
	float r, x;
	float circle, run;
	float PI = (float)22/7;
	cin >> d;
	while(d--){
		cin >> r >> x;
		circle = 2 * PI * r;
		run = 100 * x;
		if(run >= circle)
			toffees++;
	}
	cout << toffees << endl;
	return 0;
}
