#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (k == 1 && x == 1) {
            cout << "NO" << endl;
            continue;
        }

        if (k == 2 && x == 1 && n % 2 == 1) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        if (x == 1) {
            if (n % 2 == 0) {
                // n = 2 + 2 + ... + 2
                int m = n / 2;
                cout << m << endl;

                for (int i = 0; i < m; i++) {
                    cout << "2 ";
                }
                cout << endl;
            }
            else {
                int m = (n - 1) / 2;
                cout << m << endl;

                cout << "3 ";

                for (int i = 0; i < (n - 3) / 2; i++) {
                    cout << "2 ";
                }

                cout << endl;
            }
        }
        else {
            int m = n;
            cout << m << endl;

            for (int i = 0; i < n; i++) {
                cout << "1 ";
            }
            cout << endl;
        }
    }

    return 0;
}