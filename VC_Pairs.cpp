#include<iostream>
#include<string>
using namespace std;
 
bool isvowel(char ch)
{
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		return true;
	else
		return false;
}
 
int main()
{
	long long int N, T, i = 0, count;
	string str;
	cin>>T;
 
	while(T--)
	{
		cin>>N;
		cin>>str;
		count = 0;
		for(i = 0;i < N - 1; ++i)
		{
			if(isvowel(str[i]) == false && isvowel(str[i + 1]) == true)
			count += 1;
		}
		cout << count <<endl;
	}
	return 0;
}
