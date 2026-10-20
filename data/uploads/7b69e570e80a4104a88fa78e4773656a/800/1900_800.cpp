#include<iostream>
#include<vector>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int dots = 0;
        int curr=0;
        int maxdots = 0;
        for(char ch:s){
            if(ch=='.'){
                dots++;
                curr++;
                maxdots = max(maxdots, curr);
            }
            else{
                curr=0;
            }
        }
        if(maxdots >=3){
            cout<<2<<endl;
        }else{
            cout<<dots<<endl;
        }
    }
    return 0;
}