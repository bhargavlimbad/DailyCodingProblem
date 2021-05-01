#include<bits/stdc++.h>
using namespace std ;

int fun(int n,int m)
{ if(n==1||m==1) return 1 ;
  else { return fun(n,m-1) + fun(n-1,m) ; }
}
int main()
{   int n,m ;
    cin >> n >> m ;
    int val=fun(n,m) ;
    cout << val << "\n" ;
  return 0 ;
}

