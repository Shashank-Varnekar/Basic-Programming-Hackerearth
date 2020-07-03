#include <iostream>
using namespace std;

int main()
{
	int T, N, i, j;
	cin >> T;
	while(T--){
		cin >> N;
		for(i=1; i<=N; i++){
			for(j=1;j<=N*2-1;j++)
			{
				if(j >= (N+1)-i && j <= (N-1)+i)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
