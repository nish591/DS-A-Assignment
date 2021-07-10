#include<iostream>
#include<vector>
using namespace std;
bool isToeplitzMatrix(vector <vector<int> >& matrix) {
    int i, j, m = matrix.size(), n=matrix[0].size();
    bool f = false;
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                if(j+1 < n && i+1 < m && matrix[i][j]!=matrix[i+1][j+1]){
                    return false;
                }
            }
        }
    return true;
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
    bool res = isToeplitzMatrix(arr);
    if(res)
        cout << "true";
    else
        cout << "false";
    return 0;
}
