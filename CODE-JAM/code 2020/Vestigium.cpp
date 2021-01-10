#include <bits/stdc++.h>

using namespace std;

long long int n;



int main()
{ 
    
long long int ind=1,t;
 cin>>t;
 
 
 
 while(ind <= t )
 { 

  cin>>n;
 
 long long int arr[n][n];
long long int trace = 0;
long long int n_row=0,n_col=0;
 
for(int i=0;i<n;i++)
 { 
  for(int j=0;j<n;j++)
  {cin>>arr[i][j];
  if(i==j)
  trace += arr[i][j];
  }
  
 } 


 for(int i=0;i<n;i++)
 {  set<int> st;
  for(int j=0;j<n;j++)
  {	
  	st.insert(arr[i][j]);
   
	  }
  n_row += st.size()!=n;
 }
 
 for(int i=0;i<n;i++)
 {  set<int> st;
  for(int j=0;j<n;j++)
  {	
    st.insert(arr[j][i]);
	  }
  n_col += st.size()!=n;
 }


 
  printf("Case #%d: %d %d %d \n",ind,trace,n_row,n_col);
  ++ind;
     
 }
     
     return 0;
}