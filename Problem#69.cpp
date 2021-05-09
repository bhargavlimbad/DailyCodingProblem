#include<bits/stdc++.h>
using namespace std ;

int main()
{
   int n ;
   cin >> n ;

   if(n<2) return 0 ;

   vector<int> a ;
   for(int i=0;i<n;i++)
   { int temp ; cin >> temp ;
     a.push_back(temp) ;
   }
   sort(a.begin(),a.end()) ;

   int m=a[n-1]*a[n-2]*a[n-3] ;
   if(a[1]<0) { int temp=a[0]*a[1]*a[n-1] ;
                if(temp>m) m=temp ;
              }
   cout << m << "\n" ;
  return 0 ;
}
