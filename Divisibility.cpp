#include <iostream>
using namespace std;

int main() {

    int N = 0;
    cin>>N;
    long data[N];
    for(auto i=0; i<N; i++)
        cin>>data[i];
    if(data[N-1] % 10 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
