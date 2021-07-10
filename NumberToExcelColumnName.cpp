#include<iostream>
#include<string>
using namespace std;
string convertToTitle(int columnNumber) {
        int i,n = columnNumber;
        string res="";
        while(n > 0){
            char ch = 'A'+(n-1)%26;
            res = ch + res;
            n = (n-1)/26;
        }
        return res;
}
int main(){
    int a;
    cin >> a ;
    string res = convertToTitle(a);
    cout << res;
    return 0;
}
