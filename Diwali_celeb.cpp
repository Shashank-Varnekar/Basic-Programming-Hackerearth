#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int a, k, n;
	while(T--){
		cin >> a >> k >> n;
		for(int i=1; i<n; i++){
			a += k;
		}
		cout << a << endl;
	}
	return 0;
}
