#include<iostream>
#include<string>
using namespace std;
int lengthOfLastWord(string s) {
        int n = s.size(),i =n-1,c=0;
        char ch = s[i];
        while(ch==' '){
            i--;
            if(i < 0 )
                return 0;
            ch = s[i];
        }
        for(;i>=0;i--){
            if(s[i]==' '){
                break;
            }
            else
                c++;
        }
        return c;
}
int main(){
    string a;
    cin >> a ;
    int res = lengthOfLastWord(a);
    cout << res;
    return 0;
}
