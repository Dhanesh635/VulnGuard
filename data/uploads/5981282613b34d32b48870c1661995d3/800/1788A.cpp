#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int total = 0;
        vector<int> a(n);
        int lft = 0;
        int ans = -1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==2){
                total++;
            }
        }
        for(int i=0; i<n-1; i++){
            if(a[i]==2){
                lft++;
            }
            int ryt = total - lft;
            if(lft==ryt){
                ans = i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}