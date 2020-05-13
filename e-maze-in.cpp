#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
	int initial[2] = {0,0};
	char str[200];
	cin >> str;
	int l = strlen(str);
	for(int i=0; i<l; i++)
	{
		if(str[i] == 'L')
			initial[0]--;
		else if(str[i] == 'R')
			initial[0]++;
		else if(str[i] == 'U')
			initial[1]++;
		else if(str[i] == 'D')
			initial[1]--;
	}
	for(int i=0; i<2; i++)
	{
		cout << initial[i] << " ";
	}
	return 0;
}
