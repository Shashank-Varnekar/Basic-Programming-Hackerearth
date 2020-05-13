#include <iostream>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	for(int i=0; i<n; i-=-1)
	{
		cin >> arr[i];
	}
	long ans = 1;
	for(int i=0; i<n; i-=-1)
	{
		ans = (ans * arr[i]) % 1000000007;
	}
	cout << ans << endl; 
}
