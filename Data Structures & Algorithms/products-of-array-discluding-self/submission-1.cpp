class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        
        int num_zeroes = count(nums.begin(), nums.end(), 0);
        int temp = 1;

        if (num_zeroes > 1) return result;

        if (num_zeroes == 1){
            int pos;

            for (int i=0; i< nums.size(); i++){
                if (nums[i] == 0){
                    pos = i;
                    continue;
                }
                temp *= nums[i];
            }

            result[pos] = temp;

            return result;
        }

        for (int i=0; i< nums.size(); i++){
            temp *= nums[i];
        }

        for (int i=0; i< result.size(); i++){
            result[i] = temp / nums[i];
        }

        return result;
    }
};