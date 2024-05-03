class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        int n = nums.size();

        for(int i=0; i<n; i++){
            int curr = target - nums[i];
            auto it = find(nums.begin()+i+1,nums.end(), curr);
            if(it != nums.end()){
                indices.push_back(i);
                indices.push_back(it-nums.begin());
                break;
            }
        }
        return indices;
    }
};
