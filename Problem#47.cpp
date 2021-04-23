
// Link - https://coderbyte.com/algorithm/stock-maximum-profit
/*
#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int a[n] ;

    for(int i=0;i<n;i++)
    { cin >> a[i] ; }

    int ans=0 ;

    for(int i=0;i<n-1;i++)
    { for(int j=i+1;j<n;j++)
       { if(a[j]-a[i]>ans)
           ans=a[j]-a[i] ;
       }
    }

    cout << ans << "\n" ;

  return 0 ;
}
*/

#include<bits/stdc++.h>
using namespace std ;

int main()
{
   int length ;
   cin >> length ;
   int price[length] ;

   for(int i=0;i<length;i++)
   { cin >> price[i] ; }

   int profit=0,min_price=price[0] ;

   for(int i=1;i<length;i++)
   {
     if(price[i]>min_price) {  if(price[i]-min_price>profit)
                               profit=price[i]-min_price ;
                            }

     else { min_price=price[i] ; }
   }

   cout << profit << "\n" ;

 return 0 ;
}
