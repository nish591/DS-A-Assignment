#include <iostream>
#include <vector>
using namespace std;
int maximumWealth(vector< vector<int> >& accounts) {
        int max=INT_MIN,sum=0,i,j,m=accounts.size(),n=accounts[0].size();
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                sum += accounts[i][j];
            }
            if(sum > max)
                max = sum;
            sum=0;
        }
        return max;
}
int main(){
    int n,temp,i,j,m;
    cin >> n >>m;
    vector <vector <int> > vec;
    for(i=0;i<n;i++){
        vector <int> v1;
        for(j=0;j<m;j++){
            cin >> temp;
            v1.push_back(temp);
        }
        vec.push_back(v1);
    }
    int res = maximumWealth(vec);
    cout << res;
    return 0;
}
