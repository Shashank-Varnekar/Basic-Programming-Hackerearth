#include <iostream>
using namespace std;

int main()
{
	int len_Name, no_pages;
	cin >> len_Name >> no_pages;
	if(len_Name <= 23 && 500 <= no_pages <= 1000)
	{
		cout << "Take Medicine" << endl;
	} 
	else
		cout << "Don't take Medicine" << endl;
	return 0;
}
