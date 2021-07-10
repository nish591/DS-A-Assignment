#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
string addLargeIntegers(string a, string b){
    int i,na =a.size(),nb = b.size();
    string str1 = min(na,nb) == na ? b : a, str2;
    str2 = str1 == b ? a : b;
    int n1 = str1.size(), n2 = str2.size();
    string res ="0";
    if(n1!=n2){
        for(i=1;i<n1-n2;i++)
            res += '0';
        str2 = res + str2;
    }
    res = "";
    int t,carry=0;
    for(i=n1-1; i>=0;i--){
        t = (str1[i]-'0')+(str2[i]-'0') +  carry;
        if(t > 9)
            carry = t/10;
        else
            carry = 0;
        res += to_string(t%10);
    }
    if(carry!=0)
    res += to_string(carry);
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    string a, b, res;
    cin >> a >> b;
    res = addLargeIntegers(a,b);
    cout << res;
    return 0;
}

