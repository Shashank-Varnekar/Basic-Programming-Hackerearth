#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int K, a[7];
	
	for(int i=0; i<T; i++)
	{
		cin >> K;
		int count = 0, sum = 0;
		for(int i=0; i<7; i++)
		{
			cin >> a[i];
		}
		while(sum!=K)
		{
	        for(int i=0;i<7;i++)
	        {
	        	sum += a[i];
		        if(sum >= K)
		        {
		     		count = i+1;
			    	break;
		       	}
	        }
			if(sum >= K)
		    	{
			     break;
		    	}
		}
		if(count==1)
			cout << "MONDAY"<< endl;
		else if(count==2)
			cout << "TUESDAY" << endl;
		else if(count==3)
			cout << "WEDNESDAY" << endl;
		else if(count==4)
			cout << "THURSDAY" << endl;
		else if(count==5)
			cout << "FRIDAY" << endl;
		else if(count==6)
			cout << "SATURDAY" << endl;
		else
			cout << "SUNDAY" << endl;
	}
	return 0;
}
