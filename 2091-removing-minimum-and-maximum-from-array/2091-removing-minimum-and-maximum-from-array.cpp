class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int miniIndex = 0;
        int maxiIndex = 0;

        for(int i = 0; i < n; i++) {

            if(nums[i] < nums[miniIndex]) {
                miniIndex = i;
            }

            if(nums[i] > nums[maxiIndex]) {
                maxiIndex = i;
            }
        }

        if(miniIndex > maxiIndex) {
            swap(miniIndex, maxiIndex);
        }
        int left = maxiIndex + 1;
        int right = n - miniIndex;
        int both = (miniIndex + 1) + (n - maxiIndex);

        return min({left, right, both});
    }
};