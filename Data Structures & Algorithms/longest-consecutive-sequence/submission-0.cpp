class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> arr(nums.begin(), nums.end());

        int curr_size, curr_num;
        int running_size = 0;

        for (int num: nums){
            curr_num = num;

            if (arr.find(curr_num-1) == arr.end()){
                curr_size = 1;
                
                while(arr.find(++curr_num) != arr.end()){
                    curr_size++;
                }
                running_size = max(running_size, curr_size);
            }
        }
        return running_size;
    }
};