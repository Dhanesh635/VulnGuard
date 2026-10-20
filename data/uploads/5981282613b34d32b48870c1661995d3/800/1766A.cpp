#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dig= 0;
        int temp = n;
        int last_dig = n%10;
        while(temp>0){
            if(temp<10){
                last_dig = temp;
            }
            dig++;
            temp/=10;
        }
        int ans = 9*(dig-1) + last_dig;
        cout<<ans<<endl;
    }
    return 0;
}