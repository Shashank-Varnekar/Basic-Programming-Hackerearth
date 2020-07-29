#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        for(int i=0; i<str.length(); i++){
            if(isupper(str[i])){
                if(i == 0)
                    str[i] = tolower(str[i]);
                else{
                    str[i] = tolower(str[i]);
                    str.insert(str.begin()+i,'_');
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}
