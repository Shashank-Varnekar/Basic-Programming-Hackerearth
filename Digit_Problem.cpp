#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char x[20];
	int k;
	cin >> x >> k;
	int l = strlen(x);
	for(int i=0; i<k; i++)
	{
		if(x[i] != '9' && i < k)
		{
			x[i] = '9';
		}
		else
		{
			x[k] = '9';
		}
	}
	cout << x;
}
