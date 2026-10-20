#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        vector<int> b;
        vector<int> c;
        int i=0;
        while(i<n &&a[i]==a[0]){
            b.push_back(a[i]);
            i++;
        }
        if(i==n){
            cout<<-1<<endl;
            continue;
        }
        while(i<n){
            c.push_back(a[i]);
            i++;
        }
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int j=0;j<b.size();j++){
            cout<<b[j]<<" ";
        }
        cout<<endl;
        for(int j=0;j<c.size();j++){
            cout<<c[j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}