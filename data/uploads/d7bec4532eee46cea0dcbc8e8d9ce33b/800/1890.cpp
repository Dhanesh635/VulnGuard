#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        map<int, int> freq;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        if(freq.size() > 2) {
            cout << "No\n";
            continue;
        }

        if(freq.size() == 1) {
            cout << "Yes\n";
            continue;
        }

        int x = freq.begin()->second;
        int y = freq.rbegin()->second;

        if(abs(x - y) <= 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}