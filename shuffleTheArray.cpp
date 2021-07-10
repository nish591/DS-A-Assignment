#include<iostream>
#include<vector>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> num2(2*n);
        int j=0;
        for(int i=0;i<n;i++){
            num2[j++] = nums[i];
            num2[j++] = nums[i+n];
        }
        return num2;
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
    vec = shuffle(vec, temp);
    for(i=0;i<n;i++){
        cout << vec[i] << " ";
    }
    return 0;
}
