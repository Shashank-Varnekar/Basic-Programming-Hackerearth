#include <iostream>
using namespace std;

int main()
{
	int N, Q;
	cin >> N >> Q;
	int arr[N];
	int query[Q][3];
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	for(int i=0; i<Q; i++){
		for(int j=0; j<3; j++){
			cin >> query[i][j];
		}
	}
	for(int i=0; i<Q; i++){
		if(query[i][0] == 1){
			arr[query[i][1]] = query[i][2];
		}
		else if(query[i][0] == 2){
			int sum = 0;
			int l = query[i][1];
			int h = query[i][2];
			for(int i=l; i<=h; i++){
				sum = sum + arr[i];
			}
			cout << sum << endl;
		}
	}
}
