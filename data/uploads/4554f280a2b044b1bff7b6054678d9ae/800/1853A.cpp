#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int diff = 0;
        int min_diff = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0){
                diff = a[i] - a[i-1];
                min_diff = min(min_diff, diff);
            }
        }
        if(min_diff < 0){
            cout<<0<<endl;
        }else{
            cout<<(min_diff/2)+1<<endl;
        }

    }
    return 0;
}