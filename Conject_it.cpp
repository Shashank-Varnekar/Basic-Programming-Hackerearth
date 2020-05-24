#include <iostream>
using namespace std;

bool math(int N)
{
	if(N == 1)
	{
		return true;
	}
	else
	{
		if(N % 2 == 0){
			N = N/2;
		}
		else 
		{
			N = 3*N + 1;
		}
	}
}

int main()
{
	int T, N;
	cin >> T;
	while(T--){
		cin >> N;
		int ans = math(N);
		if(ans == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
