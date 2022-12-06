#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long T, N, K;
    do {
        cin >> T;
    } while (T < 1 || T > pow(10, 5));
    for (long i = 0; i < T; i++) {
        do {
            cin >> N >> K;
        } while (N < 1 || N > pow(10, 9) || K < 0 || K > pow(10, 9));
        int e = K!=0? N / K:0;
        cout << N-(K*e) << "\n";
    }
    return 0;
}
