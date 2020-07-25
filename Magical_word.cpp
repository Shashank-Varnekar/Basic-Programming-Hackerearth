#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int N;
	int primes[] = {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
	int alpha[] = {'C','G','I','O','S','Y', 'a', 'e', 'g', 'k', 'm', 'q'};
	int dist[12];
	while(T--){
		cin >> N;
		char str[N];
		cin >> str;
		int min;
		for(int i=0; i<N; i++){
			min = 99;
			for(int j=0; j<12; j++){
				dist[j] = abs(primes[j] - (int)str[i]);
				if(min > dist[j])
					min = dist[j];
			}
			for(int j=0; j<12; j++){
				if(dist[j] == min){
					cout << (char)alpha[j];
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
