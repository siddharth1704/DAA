#include<bits/stdc++.h>
using namespace std;
int main(){    
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output  output.txt
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--){
      int n,x;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      	 cin>>arr[i];
      cin>>x;
      int f=-1;
      for(int i=0;i<n;i++){
      	if(arr[i]==x){
      		f=i;
      		break;
      	}
      }
      if(f!=-1)
      	cout<<"Present "<<f+1;
      else
      	 cout<<"Not Present";
    }
}