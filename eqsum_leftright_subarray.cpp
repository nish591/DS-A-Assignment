#include <iostream>
#include <vector>
using namespace std;
int main(){
    int i,lsum=0,rsum=0,n,t,pos;
    cin >> n;
    vector <int> arr;
    for(i=0;i<n;i++){
        cin >> t;
        arr.push_back(t);
        rsum += t;
    }
    for(i=0;i<n;i++){
        rsum -= arr[i];
        if(lsum==rsum){
            pos=i;
            break;
        }
        lsum += arr[i];
    }
    cout << pos;
    return 0;
}
