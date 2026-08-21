class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int largest = 0;
        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] > largest) {
                largest = candies[i];
            }
        }

        vector<bool> result;
        for(int i = 0; i < candies.size(); i++) {

            if(candies[i] + extraCandies >= largest) {
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
        }

        return result;
    }
};