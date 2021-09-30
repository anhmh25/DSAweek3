#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sumEqualTo0(int n, int arr[]){
    sort(arr, arr + n);
    for(int i = 0; i < n - 2; i++){
        for(int j = i+1; j < n-1;j++){
            for(int k = n-1 ;k>j;k--){
                if(arr[i]+arr[j]+arr[k]==0){
                    cout <<arr[i] << " " <<arr[j] <<" " <<arr[k] <<endl;
                }
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    sumEqualTo0(n,a);

}
// 1 -12 312 45 -33 0 -1 4 6 -10
