#include<iostream>
#include<string>
using namespace std;
bool canConstruct(string ransomNote, string magazine) {
        int i, r=ransomNote.size(), m=magazine.size();
        int arr[26]={0};
        for(i=0; i<m; i++){
            arr[magazine[i]-'a']++;
        }
        for(i=0; i<r; i++){
            arr[ransomNote[i]-'a']--;
            if(arr[ransomNote[i]-'a']<0)
                return false;
        }
        return true;
}
int main(){
    string a,b;
    cin >> a >>b;
    bool res = canConstruct(a, b);
    if(res)
        cout << "true";
    else
        cout<< "false";
    return 0;
}
