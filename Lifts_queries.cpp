#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	long long T;
	int N, A = 0, B = 7;
	int c=0, d=0;
	cin >> T;
	for(int i=0; i<T; i++)
	{
		cin >> N;
		c = abs(A-N);
		d = abs(B-N);
		if (c < d)
		{
			A = N;
			cout << 'A' << endl;
		}
		else if (c > d)
		{
			B = N;
			cout << 'B' << endl;
		}
		else
		{
			A = N;
			cout << 'A' << endl;
		}
	}
	return 0;
}
