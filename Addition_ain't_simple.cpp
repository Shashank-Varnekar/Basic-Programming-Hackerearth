#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	char arr[] = "0abcdefghijklmnopqrstuvwxyz";
	while(N--){
		string str, rev_str;
		cin >> str;
		int len = str.length();
		int sum = 0;
		rev_str = string(str.rbegin(),str.rend());
		for(int i=0; i<len; i++){
			sum = (str[i] - 'a' + 1) + (rev_str[i] - 'a' + 1);
			if(sum > 26){sum = sum - 26;}
			cout << arr[sum];
		}
		cout << endl;
	}
	return 0;
}
