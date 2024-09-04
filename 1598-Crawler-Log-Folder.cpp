class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> s;
        for (int i = 0; i < logs.size(); i++) {
            if (logs[i] != "../" && logs[i] != "./") {
                s.push(logs[i]);
            }
            if (logs[i] == "../" && !s.empty()) {
                s.pop();
            }
        }

        return s.size();
        
    }
};

// create stack
// traverse through vector 
// if string == "x/", add to stack
// if string == "../", pop
// if string == "./", do nothing
// after iterating through string, return size of stack