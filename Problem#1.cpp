// binary search in the second loop will be the best method
// link to explanation - https://stackoverflow.com/questions/51300360/given-a-list-of-numbers-and-a-number-k-return-whether-any-two-numbers-from-the


#include<bits/stdc++.h>
using namespace std ;

bool fun(int a[],int n,int k)
{ for(int i=0;i<n-1;i++)
    { int j=i+1 ;
      while(j<n)
      { if(a[i]+a[j]==k)
          { return true ; }
        else if(a[i]+a[j]>k) { break ; }
        j++ ;
      }
    }
  return false ;
}
int main()
{   int n,k ;
    cin >> n >> k ;
    int a[n] ;

    for(int i=0;i<n;i++)
    { cin >> a[i] ; }
    sort(a,a+n) ;

    bool ans=fun(a,n,k) ;
    cout << ans << "\n" ;

  return 0 ;
}
