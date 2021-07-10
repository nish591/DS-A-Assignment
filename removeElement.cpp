#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
        int i,n=nums.size();
        for(i=0; i<n; i++){
            if(nums[i] == val){
                nums.erase(nums.begin()+i);
                n = nums.size();
                i--;
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
    cin >> temp;
    int res = removeElement(vec, temp);
    cout << res;
    return 0;
}
