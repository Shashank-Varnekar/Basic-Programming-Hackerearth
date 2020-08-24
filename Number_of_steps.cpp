#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[N], b[N];
	cin >> a[0];
	int min = a[0];
	for(int i=1; i<N; i++){
		cin >> a[i];
		if(min > a[i])
			min = a[i];
	}
	for(int i=0; i<N; i++)
		cin >> b[i];
	int count = 0;
	int j = 1;
	while(j==1){
		j = 0;
		for(int i=0; i<N; i++){
			while(a[i] > min && b[i] != 0){
				a[i] -= b[i];
				count++;
				j = 1;
			}
			if(a[i] < min)
            {
                min = a[i];
            }
            if(min < 0)
            {
                break;
            }
		}
		if(min < 0)
        {
            break;
        }
	}
	if(min < 0)
		cout << "-1" << endl;
	else
		cout << count << endl;
	return 0;
}
