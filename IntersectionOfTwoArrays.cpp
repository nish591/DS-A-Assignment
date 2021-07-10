#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i,j,n1 = nums1.size(),n2 = nums2.size();
        unordered_set <int> mySet;
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    mySet.insert(nums1[i]);
                }
            }
        }
        vector<int> vec;
        auto itr = mySet.begin();
        for (; itr != mySet.end(); itr++)
            vec.push_back(*itr);
        return vec;

}
int main(){
    int n,m,temp,i;
    cin >> n >> m;
    vector <int> vec, vec2;
    for(i=0;i<n;i++){
        cin >> temp;
        vec.push_back(temp);
    }
    for(i=0;i<m;i++){
        cin >> temp;
        vec2.push_back(temp);
    }
    vec = intersection(vec, vec2);
    n = vec.size();
    for(i=0;i<n;i++){
        cout << vec[i] << " ";
    }
    return 0;
}

