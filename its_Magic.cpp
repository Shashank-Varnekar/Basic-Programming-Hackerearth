#include <iostream>
using namespace std;
 
int main()
{
	long long int N, sum = 0, min = -1;
	cin >> N;
	long long int arr[N];
	for(int i=0; i<N; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	for(long long int i=0; i<N; i++)
	{
		if((sum - arr[i]) % 7 == 0)
		{
			if((min == -1) || (arr[min] > arr[i]))
				min = i;
		}
	}
	cout << min;
}
