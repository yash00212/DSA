class Solution {
public:
    int specialArray(vector<int>& nums) {
        
        for(int x = 1; x <= nums.size(); x++) {
            
            int count = 0;

            for(int i = 0; i<nums.size(); i++) {
                int num = nums[i];
                if(num >= x) {
                    count++;
                }
            }

            if(count == x) {
                return x;
            }
        }

        return -1;
    }
};