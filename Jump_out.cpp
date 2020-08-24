#include<iostream>
using namespace std;

int main()
{
	long int N, i;
	cin >> N;
	long int a[N];
	for(i=1; i<=N; i++){
		cin >> a[i];
	}
	for(i=1; i<=N; i++){
		if(i + a[i] > N)
			break;
	}
	cout << i << endl;
	return 0;
}
