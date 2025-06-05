class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum = 0;
        int rightSum = 0; 
        int maxSum = 0;
        int length = cardPoints.size();

        for(int i = 0; i < k; i++){
            leftSum = leftSum + cardPoints[i];
            maxSum = leftSum;
        }

        for(int j = k - 1; j >= 0; j--){
            leftSum = leftSum - cardPoints[j];
            rightSum = rightSum + cardPoints[length-1];
            maxSum = max(maxSum , leftSum + rightSum);
            length--;
        }

        return maxSum;
        
    }
};