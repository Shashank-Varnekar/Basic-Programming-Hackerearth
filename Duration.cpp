#include <iostream>
using namespace std;

int time(int total_T, int count)
{
	if(total_T >= 60){
		total_T = total_T - 60;
		count++;
		return time(total_T, count);
	}
	else{
		cout << count << " " << total_T << endl;
	}
}

int main()
{
	int N;
	cin >> N;
	int SH, SM, EH, EM;
	int num1, num2;
	int total_T;
	while(N--)
	{
		int count = 0;
		cin >> SH >> SM >> EH >> EM;
		num1 = EH*60 + EM;
		num2 = SH*60 + SM;
		total_T = num1-num2;
	    time(total_T, count);
	}
	return 0;
}
