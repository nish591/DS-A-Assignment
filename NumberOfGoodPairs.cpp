#include <iostream>
#include <vector>
using namespace std;
int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size(),good=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j])
                    good++;
            }
        }
        return good;
}
int main(){
    int n,temp,i;
    cin >> n;
    vector <int> vec;
    for(i=0;i<n;i++){
        cin >> temp;
        vec.push_back(temp);
    }
    temp = numIdenticalPairs(vec);
    cout << temp;
    return 0;
}
