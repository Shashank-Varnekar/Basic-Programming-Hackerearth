#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int T; 
	cin >> T;
	long long N;
	while(T--){
		cin >> N;
		long long ans = 0, i, p;
		p = sqrt(N);
		for(i=1; i<=p; i++){
			ans += 2 * floor(N/i);
		}
		cout << (ans-p*p) << endl;
	}
}
