#include <iostream>
#include <vector>
#include<string>
using namespace std;
int countConsistentStrings(string allowed, vector<string>& words) {
        int i,j,n=allowed.length(),n2=words.size(),con=0,t,h=0,k,f;
        for(i=0;i<n2;i++){
            t = words[i].length();
            for(j=0;j<t;j++){
                f=0;
                for(k=0;k<n;k++){
                    if(words[i][j]==allowed[k]){
                        h++;
                        f=1;
                        break;
                    }
                }
                if(f==0)
                    break;
            }
            if(h==t)
                con++;
            h=0;
        }
        return con;
}
int main(){
    int n,i;
    string s,temp;
    cin >> s;
    cin >> n;
    vector <string> vec;
    for(i=0;i<n;i++){
        cin >> temp;
        vec.push_back(temp);
    }
    n = countConsistentStrings(s,vec);
    cout << n;
    return 0;
}
