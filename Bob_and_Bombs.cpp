#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int T;
	cin >> T;
	string str;
	while(T--){
		cin >> str;
		int count = 0;
		for(int i=0; i<str.length(); i++){
			if(str[i] == 'B'){
					if(str[i-1] == 'W'){
						str[i-1] = '.';
						count++;
					}
					if(str[i+1] == 'W'){
						str[i+1] = '.';
						count++;
					}
					if(str[i-2] == 'W'){
						str[i-2] = '.';
						count++;
					}
					if(str[i+2] == 'W'){
						str[i+2] = '.';
						count++;
					}		
			}
			else
				continue;
		}
		cout << count << endl;
	} 
	return 0;
}
