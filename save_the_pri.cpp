#include <bits/stdc++.h>

using namespace std;
int main()
{
long long unsigned int t;
cin>>t;int i;
for(i=0;i<t;i++)
{
  long long unsigned int p, c, s;
  cin >> p >> c >> s;
  long long unsigned int r;
 
  long long unsigned int result;
  
  if (c  == p) 
  {
      if(s==1)
      {
          result=c;
      }
      else
      {
          result=s-1;
      }

    
    }
    
    else
    {
     
      r = c % p;
      result=s+r-1;
      if(result<=p)
      {
          result=s+r-1;
      }
    
    else{
    result=result-p;
    }
 }
 cout<<result<<endl;
}


    return 0;
}

