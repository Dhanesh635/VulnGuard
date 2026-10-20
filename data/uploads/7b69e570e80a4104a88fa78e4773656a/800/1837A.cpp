#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>k>>x;
        if(k>=x && k%x ==0){
            cout<<2<<endl;
            cout<<k-1<<" "<<1<<endl;
            continue;
        }else{
            cout<<1<<endl;
            cout<<k<<endl;
        }
    }

    return 0;
}