class Solution {
public:
    int maxConsistentColumns(vector<vector<int>>& grid, int limit) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> dp(n, 1);

        int answer = 1;

        for (int j = 0; j < n; j++) {

            for (int i = 0; i < j; i++) {

                bool compatible = true;

                for (int r = 0; r < m; r++) {

                    long long diff =
                        1LL * grid[r][j] - grid[r][i];

                    if (llabs(diff) > limit) {
                        compatible = false;
                        break;
                    }
                }

                if (compatible) {
                    dp[j] = max(dp[j], dp[i] + 1);
                }
            }

            answer = max(answer, dp[j]);
        }

        return answer;
    }
};