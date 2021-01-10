# include<bits/stdc++.h>
# include<tuple>
using namespace std;

# define ll  long long int 

int main()
{ 
 
 ll ind=1,t;
 cin>>t;
 

 while(ind<=t)
 {
    ll flag = 0;
    ll n;
    cin>>n;

string str(n,'+');

vector< tuple<ll,ll,ll> > vec;

for(ll i=0;i<n;i++)
{ll st=0,et=0;
 cin>>st>>et;
 vec.push_back(make_tuple(st,et,i));
}
sort(vec.begin(),vec.end());

ll i=0;
vector<ll> mx = {-1,-1};

while(i<n)
{ 

 
 if(mx[0]<= get<0>(vec[i]))
 { mx[0] = get<1>(vec[i]);
 str[get<2>(vec[i])]='C';
 }
 else
 if(mx[1]<= get<0>(vec[i]))
 { mx[1] = get<1>(vec[i]);
   str[get<2>(vec[i])]='J';
 }
 else
 { 

 flag = 1;
 
 }
 ++i;
 }
 
if(flag)
 cout<<"Case #"<<ind<<": "<<"IMPOSSIBLE"<<endl;
else
cout<<"Case #"<<ind<<": "<<str<<endl;
    ++ind;
}
     
     
 return 0;
 
 
    
}
