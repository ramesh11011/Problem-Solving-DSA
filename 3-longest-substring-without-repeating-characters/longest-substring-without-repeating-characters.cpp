class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256, -1); 
        int maxLength = 0;
        int start = 0; // left boundary of the window

        for (int end = 0; end < s.length(); end++) {
            char currentChar = s[end];

            // If the character was seen before and is within the current window
            if (lastIndex[currentChar] >= start) {
                start = lastIndex[currentChar] + 1;
            }

            // Update last seen index of the current character
            lastIndex[currentChar] = end;

            // Calculate window length
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};
