#include<iostream>
#include<string>
using namespace std;
bool isAnagram(string s, string t) {
        int i, n1 = s.size(), n2 = t.size();
        int arr[26] = {0};
        if(n1!=n2)
            return false;
        for(i=0; i<n1; i++){
            arr[s[i]-'a']++;
        }
        for(i=0; i<n1; i++){
            arr[t[i]-'a']--;
            if(arr[t[i]-'a']<0)
                return false;
        }
        for(i=0; i<26; i++){
            if(arr[i]!=0)
                return false;
        }
        return true;
}
int main(){
    string a,b;
    cin >> a >> b;
    bool res = isAnagram(a, b);
    if(res)
        cout << "true";
    else
        cout<< "false";
    return 0;
}
