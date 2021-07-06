#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i,j,temp,n,t;
    cin >> n;
    vector <vector<int> > mat( n , vector<int> (n, 0));;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n/2;j++){
            t = mat[i][j];
            mat[i][j] = mat[i][n-j-1];
            mat[i][n-j-1] = t;
        }
        for(j=0;j<n;j++){
            mat[i][j] = 1 - mat[i][j];
        }
    }
    //cout << "Reversed and flipped matrix..." << endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
