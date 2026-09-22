class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i = 0; i<nums.size(); i++){
            int x = nums[i];
            freq[x]++;
        }
        int ans= 0;
        for (auto it : freq) {

            int x = it.first;

            if (freq.find(x + 1) != freq.end()) {
                ans = max(ans, freq[x] + freq[x + 1]);
            }
        }
        return ans;
    }
};