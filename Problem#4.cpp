#include<bits/stdc++.h>
using namespace std ;

int main()
{   ios_base::sync_with_stdio(0) ;
	cin.tie(0) ; cout.tie(0) ;

	int n ;
	cin >> n ;
	int a[n] ;

	for(int i=0;i<n;i++)
    { cin >> a[i] ; }
	sort(a,a+n) ;

	int m=1 ;
	for(int i=0;i<n;i++)
    { int f=0 ;
      if(a[i]>0) { if(a[i]==m) { m++ ; }
                   else { f=1 ; }
                 }
      if(f==1) { break ; }
    }
	cout << m << "\n" ;
	return 0 ;
}
