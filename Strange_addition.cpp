#include<iostream>
using namespace std;

int reverse (int n){
	int rem, rev = 0;
	while(n != 0){
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	return rev;
}

int main()
{
	int T;
	cin >> T;
	int num1, num2, add = 0;
	while(T--){
		cin >> num1 >> num2;
		add = reverse(num1) + reverse(num2);
		add = reverse(add);
		cout << add << endl;
	}
	return 0;
}
