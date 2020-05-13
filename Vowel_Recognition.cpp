#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
	int T, l;
	char str[100000];
	cin >> T;
	while(T--)
	{
		cin >> str;
		l = strlen(str);
		long long sum = 0;
		for(int i=0; i<l; i++)
		{
			char c = str[i];
			if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
			{
				long long num = l - i;
				sum += (num+(i*num));
				num = 0;
			}
			else
				continue;
		}
		cout << sum << endl;
	}
}
