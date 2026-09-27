class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int matriz[2];

        for (int i = 0; i < nums.size(); i++) {

            for (int j = (i + 1); j < nums.size(); j++) {

                if (nums[i] + nums[j] == target) {
                    matriz[0] = i;
                    matriz[1] = j;

                    return {matriz[0], matriz[1]};
                }
            }
        }

        return {};
    }
};