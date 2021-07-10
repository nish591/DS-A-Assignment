#include <iostream>
#include <vector>
#include <string>
using namespace std;
string truncateSentence(string s, int k) {
        int n=s.length();
        string t;
        for(int i=0;i<n;i++){
            if(isspace(s[i])){
                k--;
                if(k==0)
                    break;
            }
            t = t+ s[i];
        }
        return t;
}
int main(){
    int i,k;
    string s,t;
    cin >> s;
    cin >> k;
    t = truncateSentence(s,k);
    cout << t;
    return 0;
}
