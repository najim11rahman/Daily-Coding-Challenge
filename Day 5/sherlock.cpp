#include<bits/stdc++.h>
using namespace std;
int main(){
int t; cin>>t;

for(int i = 0;i<t;i++){
    int n;cin>>n;
    int arr[n];
    for(int j = 0;j<n;j++){
        cin>>arr[j];
    }
    int start = 0,end = n-1;
    int sum1 = 0,sum2= 0;

    for(int j = 0;j<n;j++){
        if(j ==0){
     sum1 = sum1 + arr[start];
     sum2 = sum2 + arr[end];
        }
   else if(start<end){
       if(sum1 < sum2){
           ++start;
        sum1 += arr[start];
       }
       else{
           --end;
           sum2 += arr[end];
       }
   }
   else{
       break;
   }
     
}
(sum1 == sum2)? cout<<"YES"<<endl : cout<<"NO"<<endl;
}


    return 0;
}