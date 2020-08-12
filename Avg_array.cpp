#include<iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;
  long long arr_A[N], arr_B[N];
  for(int i=1; i<=N; i++){
    cin >> arr_B[i];
  }
  long long sum = 0;
  for(int i=1; i<=N; i++){
    arr_A[i] = (arr_B[i] * i) - sum;
    sum = sum + arr_A[i];
    cout << arr_A[i] << " ";
  }
  return 0;
}
