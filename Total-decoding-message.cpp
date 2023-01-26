//Total Decoding Messages Program using c++

class Solution {
	public:
		int CountWays(string str)
		{
		    int N = str.length();
		    vector<int> dp(N + 1, 0);
		    dp[0] = 1;
		    dp[1] = 1;
		    if (str[0] == '0')
		        return 0;		        
		    if (N == 1)
		        return 1;	        
		    int mod = 1e9 + 7;
		    
		    for (int i = 2; i <= N; i++)
		    {
		        if (str[i - 1] > '0')
		            dp[i] += dp[i - 1];
		            
		        if (str[i - 2] == '1' || (str[i - 2] == '2' && str[i - 1] <= '6'))
		            dp[i] += dp[i - 2];
		            
		        dp[i] = dp[i] % mod;
		    }
		    		    return dp[N];
		}
};
