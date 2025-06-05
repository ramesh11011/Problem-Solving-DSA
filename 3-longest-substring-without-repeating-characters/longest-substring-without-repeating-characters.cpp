class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxLength = 0;

        vector<int> Hash(256,-1);

        for(int i = 0; i < s.size(); i++){
            char charlength = s[i];

            if(Hash[charlength] >= left){
                left = Hash[charlength]+1;

            }

            Hash[charlength] = i;
    
            maxLength = max(maxLength,i - left + 1 );
        }

        return maxLength;

        


        
    }
};