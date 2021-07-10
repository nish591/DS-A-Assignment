#include <iostream>
#include <vector>
using namespace std;
vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size(),freq=0,val=0;
        vector<int> vec;
        for(int i=1;i<n;i+=2){
            freq = nums[i-1];
            val = nums[i];
            while(freq--){
                vec.push_back(val);
            }
        }
        return vec;
}
int main(){
    int n,temp,i;
    cin >> n;
    vector <int> vec;
    for(i=0;i<n;i++){
        cin >> temp;
        vec.push_back(temp);
    }
    vec = decompressRLElist(vec);
    for(i=0;i<n;i++){
        cout << vec[i] << " ";
    }
    return 0;
}
