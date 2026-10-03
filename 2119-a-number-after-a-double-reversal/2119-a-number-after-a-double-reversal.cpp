class Solution {
public:
    bool isSameAfterReversals(int num) {
        string a = to_string(num);
        reverse(a.begin(),a.end());
        int b = stoi(a);
        string c = to_string(b);
        reverse(c.begin(),c.end());
        return stoi(c) == num;
    }
};