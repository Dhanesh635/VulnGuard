#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int a[n]; 
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int positive_count = 0; // Count of +1s in the array
        int negative_count = 0; // Count of -1s in the array
        for (int i = 0; i < n; i++) // Loop to count +1s and -1s
        {
            if (a[i] == 1)
                positive_count++;
            else
                negative_count++;
        }

        int operations = 0; 
        while (positive_count < negative_count || negative_count % 2 == 1)
        {
            operations++; 
            positive_count++; 
            negative_count--; 
        }

        cout << operations << endl; 
    }
    return 0;
}
