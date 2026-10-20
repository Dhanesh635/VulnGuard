#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans =0;
        int conti=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]==0){
                conti++;
                ans = max(ans, conti);
            } else {
                conti = 0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}