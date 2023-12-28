class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        for (int i = 0; i < nums.size(); i++) {
            int i_value = nums[i];
            for (int j = 1; j < nums.size(); j++) {
                int j_value = nums[j];
                if (i == j) break; 
                // getting rid of the same number added twice
                if (i_value + j_value == target) {
                    output.push_back(i);
                    output.push_back(j);
                    return output;
                }
            }
        }
        return output;
    }
};