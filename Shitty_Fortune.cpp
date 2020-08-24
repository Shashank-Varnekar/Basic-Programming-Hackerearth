#include<iostream>
using namespace std;
 
int main()
{
	int T;
	cin >> T;
	int K;
	string str;
	while(T--){
		cin >> str >> K;
		int flag = 0;
		int len = str.length();
		int count = 0;
		if(len % K != 0)
			flag = 0;
		else{
			int sub_len = len / K;
			string substr1 = str.substr(0, sub_len);
			for(int i=0; i<len; i += sub_len){
				string pal = str.substr(i, sub_len);
				string rev_pal;
				for(int n = sub_len-1; n >= 0; n--){
					 rev_pal.push_back(pal[n]);
				}
				if(pal == rev_pal)
					count++;
			}
			if(count == K)
				flag = 1;
		}
		if(flag == 1)
			cout << "YES" << endl;
		else	
			cout << "NO" << endl;
	}
	return 0;
}
