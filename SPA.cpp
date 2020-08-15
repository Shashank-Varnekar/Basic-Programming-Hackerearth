#include<iostream>
#include<string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	string str;
	long int W[26];
	long int C[26] = {0};
	long long TW = 0;
	float SPA = 0;
	while(T--){
		cin >> str;
		for(int i=0; i<26; i++)
			cin >> W[i];
		long TL = str.length();
		for(int i=0; i<TL; i++){
			C[str[i] - 'a']++;
		}
		for(int i=0; i<26; i++){
			if(C[i] >= 1){
				TW += W[i]; 
			}
		}
		float sum = 0;
		for(int i=0; i<26; i++){
			sum += (C[i] * W[i]);
		}
		SPA = (10 * sum) / (TL * TW);
		cout << fixed << setprecision(2) << SPA << endl;
	}
	return 0;
}
