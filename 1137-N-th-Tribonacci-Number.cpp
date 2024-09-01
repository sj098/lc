class Solution {
public:
    int tribonacci(int n) {
        unordered_map<int, long long> m;
        m[0] = 0;
        m[1] = 1;
        m[2] = 1;

        for (int i = 3; i <= n+2; i++) {
            m[i] = m[i-3] + m[i-2] + m[i-1];
        }

        return m[n];
        
    }
};