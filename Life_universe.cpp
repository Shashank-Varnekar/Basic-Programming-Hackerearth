#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n))
	{
		if(n != 42)
			cout << n << endl;
		else
			break;
	}
}
