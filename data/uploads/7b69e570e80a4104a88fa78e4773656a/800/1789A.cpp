#include<iostream>
#include<vector>
using namespace std;

int gcd(int a, int b){
    while(b){
        int temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

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

        bool flag = false;

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(gcd(a[i], a[j]) <= 2){
                    flag = true;
                    break;
                }
            }

            if(flag) break;
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}