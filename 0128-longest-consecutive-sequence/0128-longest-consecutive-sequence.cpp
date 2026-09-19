class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i = 0; i<nums.size(); i++){
            int x = nums[i];
            st.insert(x);

        }    
            int longest = 0;
            for (auto it = st.begin(); it != st.end(); it++){
                int x = *it;
                if(st.find(x-1)==st.end()){
                    int current = x;
                    int length  = 1;
                    while(st.find(current+1) != st.end()){
                        current++;
                        length++;
                    }
                    longest = max(longest,length);
                }
            }
        return longest;
    }
};