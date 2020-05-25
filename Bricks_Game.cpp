#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int i, p=0, m=0, c;
	int flag = 0;
	c = N;
	for(i=1; i<=N; i++){
		p = p + i;
		m = m + i*2;
		c = c - i - i*2;
		if(p+m < N && c < i)
			flag = 1;
	}
	if(flag == 1)
		cout << "Patlu" << endl;
	else
		cout << "Motu" << endl;
	return 0;
}
