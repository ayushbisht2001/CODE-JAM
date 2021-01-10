# include<bits/stdc++.h>
using namespace std;

# define ll long long int 

int main()
{ 
 
 ll ind=1,n;
 cin>>n;
 
 while(ind<=n)
 { 
     
  string st;
  cin>>st;
  ll c=0;
  cout<<"Case #"<<ind<<": "<<" ";
  for(char a : st)
{   int x = a - '0';

while(c<x)
{cout<<'(';
c++;
}
   while(c>x)
  {cout<<')';
  c--;
  }
 cout<<a;
  }
  
  while(c--)
  cout<<")";
  
 cout<<endl;
   ind++;   
  }
  
  
     
 return 0;
 
     
}