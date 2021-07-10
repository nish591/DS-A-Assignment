#include <iostream>
#include <vector>
using namespace std;
vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size();
        vector <int> original;
        int a=first,b,c,i=0;
        original.push_back(first);
        while(n--){
            b = encoded[i]^a;
            original.push_back(b);
            a = b;
            i++;
        }
        return original;
}
int main(){
    int n,temp,i;
    cin >> n;
    vector <int> vec;
    for(i=0;i<n;i++){
        cin >> temp;
        vec.push_back(temp);
    }
    cin >> temp;
    vec = decode(vec,temp);
    n = vec.size();
    for(i=0;i<n;i++){
        cout << vec[i] << " ";
    }
    return 0;
}
