#include<iostream>
using namespace std;

int main()
{
	long P, H;
	int S, T, x;
	cin >> P >> S >> T >> H >> x;
	int rem = 0;
	long cost = 0;
	for(int i=1; i<=x; i++){
		if(T < S){
			cost += P;
		}
		else{
			cost += H;
		}
		S--;
	}
	cout << cost << endl;
	return 0;
}
