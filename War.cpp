#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int n;
	while(T--){
		cin >> n;
		int bob[n], alice[n];
		for(int i=0; i<n; i++){
			cin >> bob[i];
		}
		for(int i=0; i<n; i++){
			cin >> alice[i];
		}
		sort(bob, bob+n);
		sort(alice, alice+n);
		if(bob[n-1] == alice[n-1]){
			cout << "Tie" << endl;
		}
		else if(bob[n-1] > alice[n-1]){
			cout << "Bob" << endl;
		}
		else{
			cout << "Alice" << endl;
		}
	}
	return 0;
}
