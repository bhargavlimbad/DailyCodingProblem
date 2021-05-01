#include<bits/stdc++.h>
using namespace std ;

int inbuiltpower(int a,int b)
{ double a1=a ;
  double b1=b ;
  int val=pow(a1,b1) ;
  return val ;
}

int power(int a,int b)
{ if(b==0) return 1 ;
  else if(b==1) return a ;
  else if(b%2==0) { int temp=power(a,b/2) ;
                    return temp*temp ;
                  }
  else if(b%2==1) { return power(a,b-1)*a ; }
}

int main()
{
    int a,b ;
    cin >> a >> b ;

    cout << inbuiltpower(a,b) << "\n" ;
    cout << power(a,b) << "\n" ;

  return 0 ;
}

