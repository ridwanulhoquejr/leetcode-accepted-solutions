class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum =  nums.size() * (nums.size() + 1) / 2;
            
        int result = nums[0];
        
        for (int i=1; i<nums.size(); i++){
            result += nums[i];
        }
        return (sum - result);
        
    }
};