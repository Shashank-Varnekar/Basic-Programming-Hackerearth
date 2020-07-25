#include<iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.length();
	int initial[] = {0,0};
	for(int i=0; i<len; i++){
		if(str[i] == 'L')
			initial[0] -= 1;
		else if(str[i] == 'R')
			initial[0] += 1;
		else if(str[i] == 'U')
			initial[1] += 1;
		else if(str[i] == 'D')
			initial[1] -= 1;
	}
	for(int i=0; i<2; i++){
		cout << initial[i] << " ";
	}
	cout << endl;
	return 0;
}
