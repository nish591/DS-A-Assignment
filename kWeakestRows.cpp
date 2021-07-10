#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> kWeakestRows(vector <vector <int> >& mat, int k) {
        vector <int> weakest;
        vector <int> extra;
        int i,j,n =mat[0].size(),m= mat.size(),n2=0;
        for(j=0;j<n;j++){
            for(i=0;i<m;i++){
                if(mat[i][j]==0 && (j==0 ||j>0 && mat[i][j-1]==1)){
                    weakest.push_back(i);
                    n2 = weakest.size();
                    if(n2 == k)
                        return weakest;
                }
            }
        }
        if(n2==0)
            weakest.push_back(0);
        else{
            for(i=0;i<m;i++)
                extra.push_back(i);
             vector <int> diff;
            vector <int> weakest2 = weakest;
            sort(weakest2.begin(),weakest2.end());
            set_difference(extra.begin(), extra.end(),weakest2.begin(), weakest2.end(),
            inserter(diff, diff.begin()));
            int d = diff.size();
            for(i=0; i<d ;i++){
                weakest.push_back(diff[i]);
                n2++;
                if(n2==k)
                    break;
            }
        }
    return weakest;
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
    cin >> k;
    cout << endl;
    vector <int> v1;
    v1 = kWeakestRows(arr, k);
    n = v1.size();
    for(i=0; i<n; i++){
        cout << v1[i] << " ";
    }
    return 0;
}
