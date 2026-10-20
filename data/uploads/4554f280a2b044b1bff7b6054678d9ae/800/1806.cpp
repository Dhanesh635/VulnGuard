#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int y_diff = d-b;
        if(y_diff>=0 && a+y_diff >= c){
            a +=y_diff;
            cout<<y_diff+ (a-c)<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}