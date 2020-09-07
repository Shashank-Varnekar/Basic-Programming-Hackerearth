#include<iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int enter[N], leave[N];
	for(int i=1; i<N; i++){
		cin >> enter[i] >> leave[i];
	}
	int count = 0;
	int seats = 0;
	for(int i=1; i<N; i++){
		seats = seats + enter[i] - leave[i];
		if(seats >= M)
			count++;
	}
	cout << count << endl; 
	return 0;
}
