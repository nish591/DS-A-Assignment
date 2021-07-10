#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
string common(string a, string b){
    int m = min(a.size(),b.size());
    string temp = "";
    for(int i=0; i<m; i++){
        if(a[i]!=b[i]){
            break;
        }
        temp += a[i];
    }
    return temp;
}
string longestCommonPrefix(vector<string>& strs) {
    int i, n = strs.size();
    string lcp="";
    lcp = strs[0];
    for(i=1; i<n; i++){
            lcp = common(lcp,strs[i]);
    }
    return lcp;
}
int main(){
    vector<string> strs;
    int n,i;
    cin >> n;
    string temp;
    for(i=0;i<n;i++){
        cin >> temp;
        reverse(temp.begin(),temp.end());
        strs.push_back(temp);
    }
    string res = longestCommonPrefix(strs);
    reverse(res.begin(),res.end());
    cout << res;
    return 0;
}

