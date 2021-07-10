#include<iostream>
#include<vector>
using namespace std;
vector<int> luckyNumbers (vector <vector<int> >& matrix) {
        vector<int> lucky;
        int m = matrix.size(), n = matrix[0].size(), Min = INT_MAX, Max = INT_MIN;
        int i,j,pos1,pos2;
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                if(matrix[i][j] < Min){
                    Min = matrix[i][j];
                    pos1 = j;
                }
            }
            for(j=0; j<m; j++){
                if(matrix[j][pos1] > Max){
                    Max = matrix[j][pos1];
                    pos2 = j;
                }
            }
            if(matrix[pos2][pos1] == Min)
                lucky.push_back(Min);
            Min = INT_MAX;
            Max = INT_MIN;
        }
        return lucky;
}
int main(){
     int n,m,i,temp,j,k;
    cin >> m >> n;
    vector< vector<int> > arr;
    for(i=0; i<n; i++){
        vector <int> v1;
        for(j=0; j<n; j++){
            cin >> temp;
            v1.push_back(temp);
        }
        arr.push_back(v1);
    }
    vector <int> v1;
    v1 = luckyNumbers(arr);
    n = v1.size();
    for(i=0; i<n; i++){
        cout << v1[i] << " ";
    }
    return 0;
}
