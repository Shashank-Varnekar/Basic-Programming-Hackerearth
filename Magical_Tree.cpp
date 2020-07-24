#include<iostream>
using namespace std;

int main()
{
    int L;
    cin >> L;
    int n = L;
    int arr[n];
    int k=0;
    while(L--){
        string str;
        cin >> str;
        int sum = (str[0] - '0');
        int len = str.length();
        for(int i=1; i<len-1; i+=2){;
            if(str[i] == '+'){
                sum += (str[i+1] - '0');
            }
            else{
                sum -= (str[i+1] - '0');
            }
        }
        arr[k] = sum;
        k++;
    }
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i])
            max = arr[i];
    }
    cout << max << endl;
    return 0;
}
