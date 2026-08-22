class Solution {
public:
    long long getSum(vector<int>& nums) {
        vector<int> nalviretho = nums;

        int n = nums.size();

        // Prefix sums
        vector<long long> prefix(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        // d1[i] = radius of longest odd-length palindrome centered at i
        vector<int> d1(n);

        int l = 0, r = -1;

        for (int i = 0; i < n; ++i) {
            int k = (i > r) ? 1 : min(d1[l + r - i], r - i + 1);

            while (i - k >= 0 &&
                   i + k < n &&
                   nums[i - k] == nums[i + k]) {
                ++k;
            }

            d1[i] = k;

            if (i + k - 1 > r) {
                l = i - k + 1;
                r = i + k - 1;
            }
        }

        // d2[i] = radius of longest even-length palindrome
        // centered between i-1 and i
        vector<int> d2(n);

        l = 0;
        r = -1;

        for (int i = 0; i < n; ++i) {
            int k = (i > r) ? 0 : min(d2[l + r - i + 1], r - i + 1);

            while (i - k - 1 >= 0 &&
                   i + k < n &&
                   nums[i - k - 1] == nums[i + k]) {
                ++k;
            }

            d2[i] = k;

            if (i + k - 1 > r) {
                l = i - k;
                r = i + k - 1;
            }
        }

        long long ans = 0;

        // Check longest odd palindrome at every center
        for (int i = 0; i < n; ++i) {
            int left = i - d1[i] + 1;
            int right = i + d1[i] - 1;

            long long sum = prefix[right + 1] - prefix[left];

            ans = max(ans, sum);
        }

        // Check longest even palindrome at every center
        for (int i = 0; i < n; ++i) {
            if (d2[i] == 0)
                continue;

            int left = i - d2[i];
            int right = i + d2[i] - 1;

            long long sum = prefix[right + 1] - prefix[left];

            ans = max(ans, sum);
        }

        return ans;
    }
};