#include <iostream>
using namespace std;
 
int main()
{
	int L, W, H, N;
	cin >> L;
	cin >> N;
	while(N--)
	{
		cin >> W >> H;
		if(W < L || H < L)
			cout << "UPLOAD ANOTHER" << endl;
		else if(W == L && H == L || W == H)
			cout << "ACCEPTED" << endl;
		else
			cout << "CROP IT" << endl;
	}
}
