#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int num1, num2;
	while(T--){
		cin >> num1 >> num2;
		int rem1, rem2, rem3, rev1=0, rev2=0;
		int add = 0, revadd = 0;
		while(num1 != 0){
			rem1 = num1 % 10;
			rev1 = rev1 * 10 + rem1;
			num1 /= 10;
		}
		while(num2 != 0){
			rem2 = num2 % 10;
			rev2 = rev2 * 10 + rem2;
			num2 /= 10;
		}
		add = rev1 + rev2;
		while(add != 0){
			rem3 = add % 10;
			revadd = revadd * 10 + rem3;
			add /= 10;
		}
		cout << revadd << endl;
	}
	return 0;
}
