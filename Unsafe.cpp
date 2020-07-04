#include <iostream>
using namespace std;

int main()
{
	int T;
	int N, M;
	cin >> T;
	while(T--)
	{
		cin >> N >> M;
		int mat[N][M];
		for(int i=1; i<=N; i++){
			for(int j=1; j<=M; j++){
				cin >> mat[i][j];
			}
		}
		int min = mat[1][1];
		int max = mat[1][1];
		int min_i, min_j, max_i, max_j;
		for(int i=1; i<=N; i++){
			for(int j=1; j<=M; j++){
				if(min > mat[i][j]){
					min = mat[i][j];
					min_i = i;
					min_j = j;
				}
				if(max < mat[i][j]){
					max = mat[i][j];
					max_i = i; 
					max_j = j;
				}
			}
		}
		int count = 0;
		for(int i=1; i<=N; i++){
			for(int j=1; j<=M; j++){
				if(i != min_i && i != max_i && j != min_j && j != max_j){
					count++;
				}
			}
		}
		cout << count << endl;
	}
}
