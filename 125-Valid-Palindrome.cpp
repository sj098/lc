class Solution {
public:
    bool isPalindrome(string s) {
        std::string newstring = \\;
        for (char c : s) {
            if (std::isalpha(c)) {
                newstring += std::tolower(c);
            }
            if (isdigit(c)) {
                newstring += c;
            }
        }

        for (int i = 0; i < newstring.length(); i++) {
            if (newstring[i] != newstring[newstring.length()-1-i]) {
                return false;
            }
        }
        return true;

    }
};

//check if first letter is alpha
//add to new string
//check if first letter is equal to last letter
