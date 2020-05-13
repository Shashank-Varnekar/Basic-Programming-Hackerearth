#include <iostream>
#include <cstring>
 
using namespace std;
 
int main()
{
    char s[100];
    cin >> s;
    int flag = 0;
    int l = strlen(s);
    for(int i=0; i<l; i++)
    {
        if(s[i] != s[l-i-1])
            flag = 1;
    }
    if (flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
