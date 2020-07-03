#include <iostream>
using namespace std;

int main()
{
	long long int D, Oc, Of, Od, Cs, Cb, Cm, Cd;
	cin >> D;
	cin >> Oc >> Of >> Od;
	cin >> Cs >> Cb >> Cm >> Cd;
	long long int Ofare, Cfare;
	
	Ofare = Oc + (D - Of) * Od;
	Cfare = Cb + (D / Cs) * Cm + (D * Cd);

	if(Ofare <= Cfare)
		cout << "Online Taxi" << endl;
	else
		cout << "Classic Taxi" << endl;
	return 0;
}
