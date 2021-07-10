#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s) {
        int n=s.size(),l=0,r=n-1,i,j;
        char ch;
        string temp = "";
        for(i=0;i<n;i++){
            s[i] = tolower(s[i]);
        }
        for(i=0;i<n;i++){
            ch = s[i];
            if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
                temp += ch;
            }
        }
        n = temp.size();
        for(i=0,j=n-1;i<j;i++,j--){
            if(temp[i]!=temp[j])
                return false;
        }
        return true;
}
int main(){
    string a;
    cin >> a ;
    bool res = isPalindrome(a);
    if(res)
        cout << "true";
    else
        cout<< "false";
    return 0;
}
