#include<iostream>
using namespace std;
 
int main()
{
	int T, N;
	cin >> T;
	for(int i=0; i<T; i++)
	{
		cin >> N;
		int size = N * 2;
		for(int j=0; j<N ; j++){
			for(int k=size; k>0; k--){
				if((k>=j+1) && (k <=size-j))
					cout << "#";
				else
					cout << "*";
			}
			cout << endl;
		} 
		cout << endl;
	}
	return 0;
}
