#include<iostream>
#include<string>
using namespace std;
bool isVowel(char ch){
        return ch=='O'||ch=='o'||ch=='a'||ch=='A'||ch=='I'
            ||ch=='i'||ch=='u'||ch=='U'||ch=='E'||ch=='e';
}
string reverseVowels(string s) {
        int i=0, n=s.size(),j=n-1;
        bool vowel1=false,vowel2=false;
        while(i<j){
            vowel1 = isVowel(s[i]);
            vowel2 = isVowel(s[j]);
            if(vowel1 && vowel2){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!vowel1)
                i++;
            else if(!vowel2)
                j--;
        }
        return s;
}
int main(){
    string a;
    cin >> a ;
    string res = reverseVowels(a);
    cout << res;
    return 0;
}
