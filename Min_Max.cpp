#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int arr[N];
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	sort(arr, arr+N);
	int min = arr[0];
	int max = arr[N-1];
	for(int i = min; i <= max; i++){
		if(arr[i] == 0){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
