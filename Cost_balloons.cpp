#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int N;
	while(T--){
		int cost1, cost2, count1, count2;
		int sum1 = 0, sum2 = 0;
		cin >> cost1 >> cost2;
		cin >> N;
		int bal1[N], bal2[N];
		count1 = 0;
		count2 = 0; 
		for(int i=0; i<N; i++){
			cin >> bal1[i] >> bal2[i];
		}
		for(int i=0; i<N; i++){
			if(bal1[i] == 1)
				count1++;
			if(bal2[i] == 1)
				count2++;
		}
		sum1 = cost1 * count1 + cost2 * count2;
		sum2 = cost1 * count2 + cost2 * count1;
		if(sum1 > sum2)
			cout << sum2 << endl;
		else
			cout << sum1 << endl;
	}
	return 0;
}
