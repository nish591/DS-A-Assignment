#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int i, n = nums.size();
        for(i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
                n = nums.size();
            }
        }
        return n;
}
int main(){
    int n,temp,i;
    cin >> n;
    vector <int> vec;
    for(i=0;i<n;i++){
        cin >> temp;
        vec.push_back(temp);
    }
    int res = removeDuplicates(vec);
    cout << res;
    return 0;
}
