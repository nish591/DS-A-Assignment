#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int n,i,t,j,m;
    cin >> n;
    vector<int> arr,arr2,arr3;
    for(i=0;i<n;i++){
        cin >> t;
        arr.push_back(t);
    }
    if(n%2!=0)
        m = n/2+1;
    else
        m = n/2;
    for(i=0;i<n/2;i++){
        arr2.push_back(arr[i]);
    }
    for(i=m;i<n;i++){
        arr3.push_back(arr[i]);
    }
    sort(arr2.begin(),arr2.end());
    sort(arr3.begin(),arr3.end());
    int k = arr3.size();
    for(j=0;j<k/2;j++){
        t= arr3[j];
        arr3[j] = arr3[k-j-1];
        arr3[k-j-1] = t;
    }
    k=arr2.size();
    for(i=0;i<k;i++){
        cout << arr2[i] <<" ";
    }
    if(n%2!=0)
    cout << arr[i] <<" ";
    k=arr3.size();
    for(i=0;i<k;i++){
        cout << arr3[i] <<" ";
    }
    return 0;
}
