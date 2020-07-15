#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin >> a[i][j];
	int max = 0;
	for(int i=1; i<n-1; i++){
		for(int j=1; j<m-1; j++){
			for(int x=i; x<n-1; x++){
				for(int y=1; y<m-1; y++){
					if((x==i+1 && j-1<=y && y<=j+1)||(x==i+2 && y==j)||(x==i && y<j+3));
					else
					{
						int res=(a[i][j]*a[x][y])+(a[i+1][j]*a[x+1][y])+(a[i-1][j]*a[x-1][y])+(a[i][j+1]*a[x][y+1])+(a[i][j-1]*a[x][y-1]);
            					if(max<res)
           					{
              						max=res;
            					}
					}
				}
			}
		}
	}
	cout << max << endl;
	return 0;
}
