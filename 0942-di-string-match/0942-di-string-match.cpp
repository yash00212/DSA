class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low = 0;
        int high = s.length();
        vector<int> ans;
        for(int i = 0; i<s.size(); i++){
            char ch = s[i];
            if(ch == 'I'){
                ans.push_back(low);
                low++;
            }else{
                ans.push_back(high);
                high--;
            }
        }
        ans.push_back(low);
        return ans;
    }
};