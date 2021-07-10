#include <iostream>
#include <string>
#include <vector>
using namespace std;
string restoreString(string s, vector<int>& indices) {
        char t[100];
        int n=indices.size(),i=0;
        for(i=0;i<n;i++){
            t[indices[i]] = s[i];
        }
        string res;
        for(i=0;i<n;i++){
            res = res + t[i];
        }
        return res;
}
int main(){
    string s,temp;
    cin >> s;
    int n = s.size(),i,t;
    vector <int> vec;
    for(i=0;i<n;i++){
        cin >> t;
        vec.push_back(t);
    }
    temp = restoreString(s,vec);
    cout << temp;
    return 0;
}

