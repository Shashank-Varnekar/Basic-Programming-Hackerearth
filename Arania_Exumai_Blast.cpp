#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int l = str.length();
	int n = 0;
	for(int i=0; i<l-1; i++){
		if(str[i] == str[i+1])
			n++;
	}
	cout << n << endl;
	return 0;
}
