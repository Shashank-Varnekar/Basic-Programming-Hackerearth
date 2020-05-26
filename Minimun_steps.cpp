#include <iostream>
using namespace std;

long math(long k, long m, long n, long count)
{
	while(k > 0){
	if(k == m)
		return count;
	else if(k < m){
		k *= n;
		count++;
		return math(k, m, n, count);
	}
	else{
		if(k-1 == m){
			k -= 1;
			count++;
			return math(k, m, n, count);
		}
		else{
			k -= 2;
			count++;
			return math(k, m, n, count);
		}
	}
	}
}

int main()
{
	long T;
	long k, m, n;
	cin >> T;
	while(T--)
	{
		long count = 0;
		cin >> k >> m >> n;
		cout << math(k, m, n, count) << endl;
	}
	return 0;
}
