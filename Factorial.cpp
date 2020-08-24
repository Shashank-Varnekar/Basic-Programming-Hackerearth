#include<iostream>
using namespace std;
 
int main()
{
	int n, fact;
	cin >> n;
	fact=n;
	for(int i=n-1; i>0; i--)
	{
		fact = fact * i;
	}
	cout << fact << endl;
}
