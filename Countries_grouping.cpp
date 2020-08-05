#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--){
		int N, flag = 0, count = 0;
		cin >> N;
		int arr[N];
		for(int i=0; i<N; i++){
			cin >> arr[i];
		}
		for(int i=0; i<N; i++){
			for(int j=i; j<(i+arr[i]); j++){
				if(arr[j] != arr[i]){
					flag = 1;
					break;
				}
			}
			count++;
			i = i + arr[i] - 1;
			if(flag == 1)
				break;
		}
		if(flag == 1)
			cout << "Invalid Data" << endl;
		else
			cout << count << endl;
	}
	return 0;
}
