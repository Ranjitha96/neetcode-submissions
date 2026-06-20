class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> numset;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(numset.find(nums[i])!= numset.end())
               return true;
            numset.insert(nums[i]);
        }
        return false;
        
    }
};