#include<iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int arr[26] = {0};
	long int count = 0;
	for(long int i=0; i<str.length(); i++){
		arr[str[i]-'a']++;
	}
	for(long int i=0; i<26; i++){
		if(arr[i] > 1){
			count += arr[i]-1;
		}
	}
	cout << count << endl;
	return 0;
}
