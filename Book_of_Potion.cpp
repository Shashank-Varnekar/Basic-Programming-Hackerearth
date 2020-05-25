#include <iostream>
using namespace std;

int main()
{
	long num, sum = 0, i=10;
	cin >> num;
	while(num > 0){
		sum += (num % 10)*i;
		num = num / 10;
		i--;
	}
	if(sum % 11 == 0)
		cout << "Legal ISBN" << endl;
	else
		cout << "Illegal ISBN" << endl;
}
