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
      int lo=0;
      int hi=n-1;
      while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            f=mid;
            break;
        }
        if(arr[mid]>x)
            hi=mid-1;
        
        else
            lo=mid+1;
      }
     if(f!=-1)
       cout<<"Present "<<f+1;
     else
       cout<<"Not Present"; 
    }
}
