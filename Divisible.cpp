#include <iostream>
using namespace std;

void divide(long A[], long N)
{
   long mid = N / 2;
   long f_digit = 0, num1 = 0, l_digit = 0;
   for(long i=0; i<mid; i++){
      f_digit = A[i];
      while(f_digit >=10){
         f_digit = f_digit / 10; 
      }
      num1 = num1 * 10 + f_digit;
   }
   for(long j=mid; j<N; j++){
      l_digit = A[j];
      while(l_digit >=10){
         l_digit = l_digit % 10;
      }
      num1 = num1 * 10 + l_digit;
   }
   if(num1 % 11 == 0)
      cout << "OUI" << endl;
   else
      cout << "NON" << endl;
}

int main()
{
   long N;
   cin >> N;
   long A[N];
   for(long i=0; i<N; i++){
      cin >> A[i];
   }
   divide(A, N);
   return 0;
}
