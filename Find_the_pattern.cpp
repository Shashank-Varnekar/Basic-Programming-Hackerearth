#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	long int arr[N];
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	sort(arr, arr+N);
	cout << arr[0]+arr[N-1] << endl;
	return 0;
}
