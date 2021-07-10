#include<iostream>
#include<vector>
using namespace std;
vector< vector<int> > flipAndInvertImage(vector <vector<int> >& image) {

        int i,j,temp,n=image.size(),t;
        for(i=0;i<n;i++){
            for(j=0;j<n/2;j++){
                t = image[i][j];
                image[i][j] = image[i][n-j-1];
                image[i][n-j-1] = t;
            }
            for(j=0;j<n;j++){
                image[i][j] = 1 - image[i][j];
            }
        }
        return image;

}
int main(){
    int n,i,temp,j;
    cin >> n;
    vector< vector<int> > arr;
    for(i=0; i<n; i++){
        vector <int> v1;
        for(j=0; j<n; j++){
            cin >> temp;
            v1.push_back(temp);
        }
        arr.push_back(v1);
    }
    arr = flipAndInvertImage(arr);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
