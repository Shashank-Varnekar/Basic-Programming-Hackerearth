#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s[1000];
	cin >> s;
	int sum = 0;
	for(int i=0; i<strlen(s); i++){
		sum = sum + ( s[i] - 'a' + 1 );
	}
	cout << sum << endl;
	return 0;
}
