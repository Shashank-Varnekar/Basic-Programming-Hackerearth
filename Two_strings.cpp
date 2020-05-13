#include <iostream>
#include <cstring>
#define max_size 100000
using namespace std;
 
int main ()
{
	int T, l;
	char s1[max_size], s2[max_size];
	long int acount[26] = {0};
	long int bcount[26] = {0};
	cin >> T;
	for(int i=0; i<T; i++)
	{
		int count = 0;
		cin >> s1 >> s2;
		l = strlen(s1);
		if(l == strlen(s2))
		{
			for(int i=0; i<l; i++)
			{
				acount[s1[i]-'a']++;	
			}
			for(int i=0; i<l; i++)
			{
				bcount[s2[i]-'a']++;	
			}
			for(int j=0; j<26; j++)
			{
				if(acount[j] == bcount[j])
					count++;
				else
					continue;
			}
			if(count == 26)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
			cout << "NO" << endl;
	}
	return 0;
}
