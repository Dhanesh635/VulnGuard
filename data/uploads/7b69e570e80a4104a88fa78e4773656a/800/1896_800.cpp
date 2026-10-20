#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        int min = INT_MAX;
        for(int i=0; i<n; i++){
            if(nums[i] < min){
                min = nums[i];
            }
        }
        if(nums[0] == min){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}