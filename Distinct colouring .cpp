class Solution {
public:
    long long int distinctColoring(int N, int r[], int g[], int b[]) {
        //code here
        vector<vector<long long int>> dp(2,vector<long long int> (3));
        dp[0][0] = r[0], dp[0][1] =g[0] , dp[0][2] =b[0];
        for (int i = 1; i < N; i++) {
            dp[i%2][0] = r[i] + min(dp[(i-1)%2][1], dp[(i-1)%2][2]);
            dp[i%2][1] = g[i] + min(dp[(i-1)%2][0], dp[(i-1)%2][2]);
            dp[i%2][2] = b[i] + min(dp[(i-1)%2][0], dp[(i-1)%2][1]);
        }
        return min(dp[(N-1)%2][0], min(dp[(N-1)%2][1], dp[(N-1)%2][2]));
    }
};
