#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int value(char ch){
        switch(ch){
            case '(': return 1;
            case ')': return -1;
            case '{': return 2;
            case '}': return -2;
            case '[': return 3;
            case ']': return -3;
        }
        return 0;
}
bool isValid(string s) {
        stack <int>st;
        int n = s.size(), i, p, flag = 1, v,t=0;
        for(i=0;i<n;i++){
            v = value(s[i]);
            if(v > 0){
                st.push(v);
                t += v;
            }
            else
            {
                if(!st.empty()){
                    p = st.top();
                    st.pop();
                    if(abs(p) == abs(v)){
                        t += v;
                        continue;
                    }
                    else{
                        flag = 2;
                        break;
                    }
                }
                t -= v;
            }}
        if(flag==2)
            return false;
        else if(t == 0)
            return true;
        return false;
}
int main()
{
    string s;
    cin >> s;
    bool res = isValid(s);
    if(res)
        cout << "true";
    else
        cout<< "false";
    return 0;
}
