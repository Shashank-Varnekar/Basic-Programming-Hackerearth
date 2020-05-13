#include <iostream>
using namespace std;
 
int main()
{
	int n, flag = 0;
	cin >> n;
	char str[n];
	for(int i=0; i<n; i++){
		cin >> str[i];
	}
	for(int i=0; i<n; i++){
		if(str[i] == '.')
		{
			flag = 1;
			str[i] = 'B';
		}
	}
	if(flag == 1)
	{
		cout << "YES" << endl;
		for(int i=0; i<n; i++){
			cout << str[i];
		}
	
	}
	else
		cout << "NO" << endl;
	return 0;
}
