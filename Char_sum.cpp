#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
	char s[100];
	cin >> s;
	int sum = 0;
	int len = strlen(s);
	for(int i=0; i<len; i++){
		sum = sum + (s[i] - 'a' + 1);
	}
	cout << sum << endl;
}
