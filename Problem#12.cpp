// Link - https://www.geeksforgeeks.org/count-ways-reach-nth-stair/

#include<bits/stdc++.h>
using namespace std ;

int fun(int x)
{ if(x==1) return 1 ;
  else if(x==2) return 2 ;
  else return fun(x-1)+fun(x-2) ;
}
int main()
{
    int n ;
    cin >> n ;

    int temp=fun(n) ;
    cout << temp << "\n" ;

	return 0 ;
}

