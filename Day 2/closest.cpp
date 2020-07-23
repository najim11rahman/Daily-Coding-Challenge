#include <bits/stdc++.h> 
using namespace std; 
void printClosest(int arr[], int n, int x) 
{ 
    int res_l, res_r;  
    int l = 0, r = n - 1, diff = INT_MAX;  
    while (r > l) { 
        if (abs(arr[l] * arr[r] - x) < diff) { 
            res_l = l; 
            res_r = r; 
            diff = abs(arr[l] * arr[r] - x); 
        } 
        if (arr[l] * arr[r] > x) 
            r--; 
  
        else 
            l++; 
    } 
  
    cout << " The closest pair is "
        << arr[res_l] << " and " << arr[res_r]; 
}  
int main() 
{ 
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&arr[i]);
    }
    printClosest(arr, n, x); 
    return 0; 
} 