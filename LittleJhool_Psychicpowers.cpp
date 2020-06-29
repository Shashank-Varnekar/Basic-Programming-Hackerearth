#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[100];
	cin >> s;
	int count = 0;
	for(int i=0; i<strlen(s); i++){
		if(s[i]==s[i+1] && s[i+1]==s[i+2] && s[i+2]==s[i+3] && s[i+3]==s[i+4] && s[i+4]==s[i+5]){
			count = 1;
		}
	}
	if(count == 1)
		cout << "Sorry, sorry!" << endl;
	else
		cout << "Good luck!" << endl;
}
