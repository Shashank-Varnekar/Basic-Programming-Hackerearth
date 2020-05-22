#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s[100];
	cin >> s;
	int arr[10] = {0};
	int len = strlen(s);
	int temp = 0;
	for(int i=0; i<len; i++){
		temp = s[i] - '0';
		arr[temp]++;
	}
	for(int i=0; i<10; i++){
		cout << i << " " << arr[i] << endl;
	}
	return 0;
}
