#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        string x, s;

        cin >> n >> m;
        cin >> x >> s;

        int count = 0;
        bool flag = false;

        while(x.size() < s.size()) {
            x += x;
            count++;
        }

        if(x.find(s) != string::npos) {
            flag = true;
        }

        if(flag) {
            cout << count << endl;
        }
        else {
            x += x;
            count++;

            if(x.find(s) != string::npos)
                cout << count << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}