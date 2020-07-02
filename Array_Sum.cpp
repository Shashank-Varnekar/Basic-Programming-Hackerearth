#include <iostream>
using namespace std;
int main()
{
	long int N;
	cin >> N;
	long a[N], sum = 0;
	for(int i=0; i<N; i++){
		cin >> a[i];
		sum += a[i];
	}
	cout << sum << endl;
	return 0;
}
