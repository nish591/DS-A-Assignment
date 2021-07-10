#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,t;
    cin >> m >> n;
    int arr[m][n], transpose[m][n];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            cin >> arr[i][j];
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            transpose[j][i] = arr[i][j];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            cout << transpose[i][j] << " ";
        cout << endl;
    }
    return 0;
}
