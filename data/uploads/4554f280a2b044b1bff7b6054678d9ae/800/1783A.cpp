#include<iostream>
#include<algorithm>
#include<vector>
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
        if(a[0]==a[n-1]){
            cout<<"NO"<<endl;
            continue;
        }
        
        int cnt=0;
        int ele = a[n-1];
        for(int i=n-2; i>=0; i--){
            if(a[i]==ele){
                a.pop_back();
                cnt++;
            }else{
                break;
            }
        }
        reverse(a.begin(), a.end());
        for(int i=0; i<cnt; i++){
            a.push_back(ele);
        }
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
        cout<<endl;
    }
    return 0;
}