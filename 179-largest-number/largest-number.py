class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        nums_str = list(map(str, nums))
        n = len(nums_str)

        # Manual bubble sort based on string concatenation comparison
        for i in range(n):
            for j in range(i+1, n):
                # If putting nums_str[j] before nums_str[i] yields bigger number, swap
                if nums_str[j] + nums_str[i] > nums_str[i] + nums_str[j]:
                    nums_str[i], nums_str[j] = nums_str[j], nums_str[i]

        result = ''.join(nums_str)
        
        # If the largest digit is 0, the result should be "0"
        return '0' if result[0] == '0' else result