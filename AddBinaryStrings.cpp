#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
string addBinary(string a, string b) {
        int i,na = a.size(),nb = b.size();
        string str1 = min(na,nb) == na ? b : a, str2;
        str2 = str1 == b ? a : b;
        int n1 = str1.size(), n2 = str2.size(), carry = 0;
        reverse(str1.begin(),str1.end());
        reverse(str2.begin(),str2.end());
        while(n1!=n2){
            str2 += '0';
            n2 = str2.size();
        }
        string res ="";
        char t1,t2;
        for(i=0; i<n1; i++){
            t1 = str1[i];
            t2 = str2[i];
            if((t1=='0' && t2=='1')||(t1=='1'&& t2=='0')){
                if(carry==0)
                    res += '1';
                else
                    res += '0';
            }
            else if(t1=='0' && t2=='0'){
                if(carry){
                    res += '1';
                    carry = 0;
                }
                else
                    res += '0';
            }
            else if(t1=='1' && t2=='1'){
                if(carry==0)
                    res += '0';
                else
                    res += '1';
                carry = 1;
            }
        }
        if(carry==1)
            res += '1';
        reverse(res.begin(),res.end());
        return res;
    }
int main(){
    string a, b, res;
    cin >> a >> b;
    res = addBinary(a,b);
    cout << res;
    return 0;
}
