#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char x[20];
	int k;
	cin >> x >> k;
	int l = strlen(x);
	for(int i=0; i<k; i++){
		for(int j=0; j<l; j++){
			if(x[j] == '9'){
				continue;
			}
			else{
				x[j] = '9';
				break;
			}
		}
	}
	cout << x;
}
