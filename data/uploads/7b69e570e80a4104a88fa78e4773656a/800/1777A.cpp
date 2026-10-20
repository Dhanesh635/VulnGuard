#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ops=0;
        int count=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool even = a[0]%2==0;
        for(int i=1; i<n; i++){
            if(a[i]%2==0 && even || a[i]%2!=0 && !even){
                count++;
            }else{
                ops+=count;
                count=0;
                even = !even;
            }
        }
        ops+=count;
        cout<<ops<<endl;
    }
    return 0;
}