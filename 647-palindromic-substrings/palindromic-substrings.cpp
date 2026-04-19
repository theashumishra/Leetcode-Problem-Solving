
class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        int i = 0;
        int count = 0;
        
        while(i < n) {
            dp[i][i] = 1;
            count++;
            i++;
        }
        
        i = 0;
        while(i < n - 1) {
            if(s[i] == s[i+1]) {
                dp[i][i+1] = 1;
                count++;
            }
            i++;
        }
        
        int j;
        int length = 3;
        while(length <= n) {
            i = 0;
            while(i < n - length + 1) {
                j = i + length - 1;
                if(s[i] == s[j] && dp[i+1][j-1] == 1) {
                    dp[i][j] = 1;
                    count++;
                }
                i++;
            }
            length++;
        }
        
        return count;
    }
};