#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--){
		int l, r, s;
		cin >> l >> r >> s;
		l = (l-1)/s+1;
		r = r/s;
		if(l > r)
			cout << "-1 -1" << endl;
		else
			cout << l << " " << r << endl;
	}
}
