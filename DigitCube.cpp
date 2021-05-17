#include<iostream>
using namespace std;

int func2(int n){
	int rem = 0;
	while(n != 0){
		rem = rem + n % 10;
		n /= 10;
	}
	n = rem * rem * rem;
	return n;	
}

int func(int n, int k){
	
	if(k == 1){
		n = func2(n);
		return n;
	}
	else{
		n = func2(n);
		k--;
		func(n, k);
	}
}

int main()
{
	int t, n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int ans = func(n, k);
		cout << ans << endl;
	}
	return 0;
}
