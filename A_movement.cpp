#include <iostream>
using namespace std;

int main()
{
	int x,count=0;
	cin >> x;
	while(x!=0)
	{
		if(x>5)
		{
			x=x-5;
		}
		else if(x=4)
		{
			x=x-4;
		}
		else if(x=3)
		{
			x=x-3;
		}
		else if(x=2)
		{
			x=x-2;
		}
		else if(x=1)
		{
			x=x-1;
		}
		count++;
	}
	cout << count << endl;
}
