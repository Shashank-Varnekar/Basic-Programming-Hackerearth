#include <iostream>
using namespace std;

int main()
{
	long int T;
	cin >> T;
	while(T--){
		long int N;
		cin >> N;
		long int arr[N];
		long int count = 0;
		for(int i=0; i<N; i++){
			cin >> arr[i];
		}
		for(int i=0; i<N-1; i++){
			for(int j=i+1; j<N; j++){
				if( (arr[i]+arr[j]) % 2 == 0 && arr[i] != arr[j])
					count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
