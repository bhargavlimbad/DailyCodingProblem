// Link - https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/the-colorful-street-1/

#include<bits/stdc++.h>
using namespace std ;
int n,k ;
int fun(int c[n][k],int i,int j,int k)
{ int m=INT_MAX ;
  for(int p=0;p<k;p++)
  { if(p!=j&&c[i][p]<m) m=c[i][p] ; }
 return m ;
}
int main()
{   ios_base::sync_with_stdio(0) ;
	cin.tie(0) ; cout.tie(0) ;

	cin >> n >> k ;
	int c[n][k] ;

	for(int i=0;i<n;i++)
    { for(int j=0;j<k;j++)
        { cin >> c[i][j] ; }
    }

    for(int i=1;i<n;i++)
    { for(int j=0;j<k;j++)
       { c[i][j]+=fun(c,i-1,j,k) ; }
    }
    int b1=INT_MAX ;
    for(int i=0;i<k;i++)
    { if(c[n-1][i]<b1)
        b1=c[n-1][i] ;
    }
    cout << b1 << "\n" ;
  return 0 ;
}
