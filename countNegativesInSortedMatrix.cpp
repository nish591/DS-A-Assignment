#include<iostream>
#include<vector>
using namespace std;
int countNegatives(vector< vector<int> >& grid) {
        int m = grid.size(),n=grid[0].size(),i,j,c=0;
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                if(grid[i][j] < 0){
                    c += n-j;
                    break;
                }
            }
        }
        return c;
    }
int main(){
    int m,n,i,temp,j;
    cin >> m >> n;
    vector< vector<int> > arr;
    for(i=0; i<m; i++){
        vector <int> v1;
        for(j=0; j<n; j++){
            cin >> temp;
            v1.push_back(temp);
        }
        arr.push_back(v1);
    }
    int res = countNegatives(arr);
    cout << res;
    return 0;
}
