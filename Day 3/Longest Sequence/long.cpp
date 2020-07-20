#include <bits/stdc++.h> 
using namespace std; 
  
int findLongestConseqSubseq(int arr[], int n) 
{ 
    unordered_set<int> S; 
    for (int i = 0; i < n; i++) 
        S.insert(arr[i]); 
    int ans = 0; 
    for (int i = 0; i < n; i++) { 
        if (S.find(arr[i] - 1) == S.end()) { 
            int j = arr[i]; 
            while (S.find(j) != S.end()) 
                j++;  
            ans = max(ans, j - arr[i]);  
        } 
    } 
    return ans; 
} 
  
int main() 
{ 
    int arr[100000], n,i ;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << findLongestConseqSubseq(arr, n) << endl; 
    return 0; 
} 
