#include<iostream>
#include<vector>
using namespace std;
vector< vector<int> > rotate(vector< vector<int> > mat1){
    int i,j,n =mat1.size();
    vector< vector<int> > mat2(n, vector<int>(n,0));
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mat2[j][n-i-1]=mat1[i][j];
        }
    }
    return mat2;
}
bool findRotation(vector< vector<int> >& mat, vector< vector<int> >& target) {
        int k=4, n= mat.size();
        while(k--){
            mat = rotate(mat);
            if(mat == target)
                return true;
        }
        return false;
}
int main(){
    vector< vector<int> > matrix, target;
    int n,i,j;
    cin >> n;
    int temp;
    for(i=0;i<n;i++){
        vector<int> v1;
        for(j=0;j<n;j++){
            cin >> temp;
            v1.push_back(temp);
        }
        matrix.push_back(v1);
    }
    cout << endl;
    for(i=0;i<n;i++){
        vector<int> v1;
        for(j=0;j<n;j++){
            cin >> temp;
            v1.push_back(temp);
        }
        target.push_back(v1);
    }
    bool res = findRotation(matrix, target);
    if(res)
        cout << "true";
    else
        cout << "false";
    return 0;
}
