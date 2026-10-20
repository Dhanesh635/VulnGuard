#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=0;
        int y=0;
        if(c%2==0){
            x+=c/2;
            y+=c/2;
        }else{
            x+=c/2+1;
            y+=c/2;
        }
        if(a+x>b+y){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}