class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> sstack;
        stack<char> tstack;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c != '#') {
                sstack.push(c);
            }
            if (c == '#' && !sstack.empty()) {
                sstack.pop();
            }
        }

        for (int i = 0; i < t.length(); i++) {
            char c = t[i];
            if (c != '#') {
                tstack.push(c);
            }
            if (c == '#' && !tstack.empty()) {
                tstack.pop();
            }
        }

        if (sstack.size() != tstack.size()) {
            return false;
        }

        // cout << "S stack: ";
        // for (int i = 0; i < sstack.size(); i++) {
        //     char c = sstack.top();
        //     cout << c << " ";
        //     sstack.pop();
        // }
        // cout << endl;

        // cout << "T stack: ";
        // for (int i = 0; i < tstack.size(); i++) {
        //     char c = tstack.top();
        //     cout << c << " ";
        //     tstack.pop();
        // }
        int n = sstack.size();
        for (int i = 0; i < n; i++) {
            if (sstack.top() != tstack.top()) {
                return false;
            }
            sstack.pop();
            tstack.pop();
        }

        return true;   
    }
};