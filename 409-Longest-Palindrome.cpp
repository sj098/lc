class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> pal;
        for (char c : s) {
            pal[c]++;
        }
        bool odd = false;
        int count = 0;

        for (const auto & [key, value] : pal) {
            if (value % 2 != 0) {
                odd = true;
                count += value-1;
            }
            else {
                count += value;
            }
        }

        if (odd == true) {
            count += 1;
        }
        
        return count;
    }
};

// find frequencies of each letter

// create unordered map
// if you can find char in map, add 1 to frequency
// if you cant find char in map, set frequency to 1

// set counter = 0
// iterate through map 
// if frequency is odd, add frequency-1 to counter
// if frequency is even, add to counter

// if any frequency was odd (use bool), add 1 to counter
// return counter

