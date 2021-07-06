#include<iostream>
#include<vector>
using namespace std;
int delN(vector<int> arr, int n){
    int i,f=0;
    for(i=0;i<n;i++){
        if(arr[i]==n){
            arr.erase(arr.begin()+i);
            f=1;
        }
    }
    n = arr.size();
    return f;
}
int main(){
    int n,len,temp,flag=0,i,j;
    cin >> n;
    vector <int> vec;
    for(i=0;i<n;i++){
        cin >> temp;
        vec.push_back(temp);
    }
    temp = n;
    while(n!=0){
        for(i=0;i<n;i++){
            if(vec[i]==temp){
                vec.erase(vec.begin()+i);
                n = vec.size();
                /*for(j=0;j<n;j++)
                    cout << vec[j] <<" ";*/
                flag=1;
                i--;
            }
        }
        if(flag==0){
            cout << "no";
            return 0;
        }
        flag=0;
        temp=n;
    }
    cout << "yes";
    return 0;
}

