#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char str[20];
	scanf("%s",str);
	int i = 0, z = 0, o = 0;
	for(i=0; i<20; i++)
	{
		if(str[i] == 'z')
			z++;
		if(str[i] == 'o')
			o++;
	}
	if(2*z==o)
		printf("Yes");
	else
		printf("No");
	return 0;
}
