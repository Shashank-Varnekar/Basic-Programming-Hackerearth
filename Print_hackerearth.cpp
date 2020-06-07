#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int N;
	cin >> N;
	char str[N];
	int count[7] = {0};
	int total[7] = {2,2,1,1,2,2,1};
	int divide[7] = {0};
	int min = 0;
	for(int i=0; i<N; i++){
		cin >> str[i];
	}
	char my_str[] = {'h','a','c','k','e','r','t'};
	for(int i=0; i<N; i++){
		if(str[i] == 'h')
			count[0]++;
		else if(str[i] == 'a')
			count[1]++;
		else if(str[i] == 'c')
			count[2]++;
		else if(str[i] == 'k')
			count[3]++;
		else if(str[i] == 'e')
			count[4]++;
		else if(str[i] == 'r')
			count[5]++;
		else if(str[i] == 't')
			count[6]++;
		else
			continue;
	} 
	for(int i=0; i<7; i++){
		divide[i] = count[i] / total[i];
	}
	min = divide[0];
	for(int i=0; i<7; i++){
		if(min > divide[i])
			min = divide[i];
	}
	cout << min << endl;
	return 0;
}
