#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, K;
    cin >> N >> K;

    vector<int> ch(N);
    for (int i = 0; i < N; i++) {
        cin >> ch[i];
    }

    vector<int> w(N);
    for (int i = 0; i < N; i++) {
        cin >> w[i];
    }
    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            if (w[i - 1] <= j) {
                dp[i][j] = max(ch[i - 1] + dp[i][j - w[i - 1]], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[N][K] << endl;

    return 0;
}