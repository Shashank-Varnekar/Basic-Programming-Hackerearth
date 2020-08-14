#include<iostream>
using namespace std;

int main(){
	long int T;
	cin >> T;
	while(T--){
		long long int n,result;
		cin >> n;
		if(n%4==0)
			result=(n/4)*(n/4)*(n/4)*(n/4);
		else if(n%6==0)
			result=(n/3)*(n/3)*(n/6)*(n/6);
		else if(n%10==0)
			result=(n/2)*(n/5)*(n/5)*(n/10);
		else 
			result=-1;
		cout << result << endl;
	}
	return 0;
}
