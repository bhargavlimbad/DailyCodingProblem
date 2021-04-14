// Link - https://www.geeksforgeeks.org/generate-integer-from-1-to-7-with-equal-probability/

#include<bits/stdc++.h>
using namespace std ;

int random5()
{   srand(time(0)) ;
    int temp=rand()%6 ;
  return temp ;
}
int random7()
{  int i = 5*random5() + random5() - 5 ;
    if (i < 22)
        return i%7 + 1 ;

   return random7() ;
}
int main()
{
    cout << random7() << "\n" ;

  return 0 ;
}
