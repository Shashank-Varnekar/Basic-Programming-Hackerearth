#include<iostream>
using namespace std;

int main()
{
	int N, x, y;
	cin >> N >> x >> y;
	int arr[N];
	int flag = 0;
	for(int i=1; i<=N; i++){
		cin >> arr[i];
	} 
	for(int i=1; i<=N; i++){
		if(arr[i]<=y && arr[i]>=x)
			flag = 1;
		else
			flag = 0;
	}
	if(flag == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
