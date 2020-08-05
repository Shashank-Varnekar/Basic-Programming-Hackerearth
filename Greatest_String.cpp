#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	string s;
	long long Q;
	while(T--){
		cin >> s;
		cin >> Q;
		for(long long int i=0; i<s.length(); i++){
			if(Q == 0)
				break;
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
				s[i] = (char)(s[i] + 1);
				Q--;
			}
		}
		cout << s << endl;
	}
	return 0;
}
