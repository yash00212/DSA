class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int largest = nums[nums.size()-1];
        int secondLargest = nums[nums.size()-2];
        int ans = (largest - 1) * (secondLargest - 1);
        return ans;
    }
};