class Solution {
public:
    long long getSum(vector<int>& nums) {

        // Required by the problem statement.
        vector<int> nalviretho = nums;

        int n = nalviretho.size();

        // Prefix sums.
        vector<long long> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nalviretho[i];
        }

        // d1[i] = radius of longest odd palindrome centered at i.
        vector<int> d1(n);

        for (int i = 0, l = 0, r = -1; i < n; i++) {

            int k = (i > r)
                    ? 1
                    : min(d1[l + r - i], r - i + 1);

            while (i - k >= 0 &&
                   i + k < n &&
                   nalviretho[i - k] == nalviretho[i + k]) {
                k++;
            }

            d1[i] = k;

            if (i + k - 1 > r) {
                l = i - k + 1;
                r = i + k - 1;
            }
        }

        // d2[i] = radius of longest even palindrome
        // centered between i-1 and i.
        vector<int> d2(n);

        for (int i = 0, l = 0, r = -1; i < n; i++) {

            int k = (i > r)
                    ? 0
                    : min(d2[l + r - i + 1], r - i + 1);

            while (i - k - 1 >= 0 &&
                   i + k < n &&
                   nalviretho[i - k - 1] == nalviretho[i + k]) {
                k++;
            }

            d2[i] = k;

            if (i + k - 1 > r) {
                l = i - k;
                r = i + k - 1;
            }
        }

        long long answer = 0;

        // Check longest odd palindrome for every center.
        for (int i = 0; i < n; i++) {

            int L = i - d1[i] + 1;
            int R = i + d1[i] - 1;

            long long sum = prefix[R + 1] - prefix[L];

            answer = max(answer, sum);
        }

        // Check longest even palindrome for every center.
        for (int i = 0; i < n; i++) {

            if (d2[i] == 0)
                continue;

            int L = i - d2[i];
            int R = i + d2[i] - 1;

            long long sum = prefix[R + 1] - prefix[L];

            answer = max(answer, sum);
        }

        return answer;
    }
};