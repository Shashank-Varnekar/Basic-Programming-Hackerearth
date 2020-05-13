#include <iostream>
#include <cctype>
#include <cstring>
 
using namespace std;
int main()
{
	char s[100];
	cin >> s;
	int l = strlen(s);
	for(int i=0; i<l; i++)
	{
		if(isupper(s[i]))
			s[i] = s[i] + 32;
		else
			s[i] = s[i] - 32;
	}
	cout << s << endl;
	return 0;
}
