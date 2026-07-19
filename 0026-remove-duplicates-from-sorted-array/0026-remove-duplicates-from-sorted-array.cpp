class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> vec(201,0);

        int ri=0, n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(vec[100+nums[i]]==0)
            {
                vec[100+nums[i]]=1;
                nums[ri] = nums[i];
                ri++;
            }
        }

        return ri;
    }
};