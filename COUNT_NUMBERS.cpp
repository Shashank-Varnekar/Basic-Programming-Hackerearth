#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int N;
	while(T--){
		cin >> N;
		int count = 0;
		char str[N];
		for(int i=0; i<N; i++){
			cin >> str[i];
		}
		if(isdigit(str[0])){
			count++;
		}
		for(int i=1; i<N; i++){
			if(isdigit(str[i])){
				if(islower(str[i-1]))
					count++;
				else if(isdigit(str[i-1]))
					continue;
			}
		}
		cout << count << endl;
	}
	return 0;
}
