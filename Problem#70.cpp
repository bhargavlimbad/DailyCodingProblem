#include<bits/stdc++.h>
using namespace std ;

int main()
{   ios_base::sync_with_stdio(0) ;
	cin.tie(0) ; cout.tie(0) ;

    int n,sum=0 ;
    cin >> n ;
    int y=n ;
    while(y!=0)
    { sum+=y%10 ;
      y=y/10 ;
    }
	if(sum>10) { cout << "Sum of Digits is exceeding the required value which is 10." << "\n" ; }
	else { int temp=10-sum ;
           n=n*10 ;
           n+=temp ;
           cout << n << "\n" ;
	     }
  return 0 ;
}
