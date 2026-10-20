#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int len = s.length();
        for(int i=0; i<n/2; i++){
            if(s[i]=='0' && s[n-i-1]=='1'){
                len--;
                len--;
            }else if(s[i]=='1' && s[n-i-1]=='0'){
                len--;
                len--;
            }else{
                break;
            }
        }
        cout<<len<<endl;
    }
    return 0;
}