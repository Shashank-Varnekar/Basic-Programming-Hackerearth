#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    int test, val, count;
    int l1,l2;
    char s1[10000], s2[10000];
    cin >> test;
    for(int i=0; i<test; i++)
    {
        count=0;
        cin >> s1 >> s2;
        l1 = strlen(s1);
        l2 = strlen(s2);
        for(int i=0; i<l1; i++){
            for(int j=0; j<l2; j++){
                if(s1[i]==s2[j])
                {
                    count += 2;
                    s1[i] = '0';
                    s2[j] = '0';
                    break;
                }
            }
        }
        val = l1 + l2 - count;
        cout << val << endl;
    }
    return 0;
}
