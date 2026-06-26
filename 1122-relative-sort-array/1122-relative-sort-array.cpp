class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> freq(1001,0);
        for(int i = 0; i<arr1.size(); i++){
            int x = arr1[i];
            freq[x]++;      
        }     
        vector<int> ans;
        for(int i=0; i<arr2.size(); i++){
            int x = arr2[i];
            while(freq[x]>0){
                ans.push_back(x);
                freq[x]--;
            }
        }
        for(int i = 0; i<=1000; i++){
            while(freq[i]>0){
                ans.push_back(i);
                freq[i]--;
            }
        }
        return ans;
    }
};