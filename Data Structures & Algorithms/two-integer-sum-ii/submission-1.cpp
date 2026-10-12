class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1;
        vector<int> result(2);

        while (l<r){
            if (numbers[l] + numbers[r] < target){
                l++;
                continue;
            }
            else if (numbers[l] + numbers[r] > target){
                r--;
                continue;
            }
            else {
                result[0] = (l+1);
                result[1] = (r+1);
                break;
            }
        }

        return result;
    }
};