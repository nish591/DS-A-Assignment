#include <iostream>
#include <vector>
using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> pos;
        int n=candies.size(),i,max=INT_MIN,t;
        for(i=0;i<n;i++){
            t = candies[i];
            if(max < t)
                max = t;
        }
        for(i=0;i<n;i++){
            if((candies[i]+extraCandies) >= max)
                pos.push_back(true);
            else
                pos.push_back(false);
        }
        return pos;
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
    vector<bool>res = kidsWithCandies(vec, temp);
    for(i=0;i<n;i++){
        if(res[i])
            cout << "true" << " ";
        else
            cout << "false" << " ";
    }
    return 0;
}
