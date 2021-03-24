// Link - https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/






#include<bits/stdc++.h>
using namespace std ;

int fun(int a[],int j,int b)
{ int max=0 ;
  for(int i=j;i<b;i++)
  { if(a[i]>max) { max=a[i] ; }
    }
 return max ;
}
int main()
{   ios_base::sync_with_stdio(0) ;
	cin.tie(0) ; cout.tie(0) ;

	int n,k ;
	cin >> n >> k ;
	int a[n] ;
	for(int i=0;i<n;i++)
    { cin >> a[i] ; }

    vector<int> ans ;

	for(int i=0;i<=n-k;i++)
    { int m=fun(a,i,i+k) ;
      ans.push_back(m) ;
    }
	for(int i=0;i<ans.size();i++)
    {  cout << ans[i] << " " ; }
    cout << "\n" ;

  return 0 ;
}
