#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s[100000];
	cin >> s;
	int l = strlen(s);
	int count = 0;
	if(s[l-1] == '6')
		cout << "-1" << endl;
	else{
		for(int i=0; i<l; i++){
			if(s[i] == '6')
				continue;
			else
				count++;
		}
		cout << count << endl;
	}
	return 0;
}
