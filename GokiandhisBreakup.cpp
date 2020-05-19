#include <iostream>
#define max 1000000
using namespace std;

int main()
{
	long n, x;
	long y[max];
	cin >> n;
	cin >> x;
	for(long i=0; i<n; i++){
		cin >> y[i];
	}
	for(long i=0; i<n; i++)
	{
		if(y[i] >= x)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
