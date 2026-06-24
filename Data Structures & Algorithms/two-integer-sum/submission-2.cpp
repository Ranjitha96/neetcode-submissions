class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map<int,int> diff;
        for(int i=0;i<n;i++)
        {
            int remaining = target - nums[i];
            if(diff.find(remaining) != diff.end())
            {
                return {diff[remaining],i};
            }
            diff[nums[i]] = i;
        }
        return {-1,-1};
    }
};
