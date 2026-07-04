class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> numSet;
        for(int i=0;i<n;i++)
        {
            numSet.insert(nums[i]);
        }
        int length=0,maxlength=0,current;
        for(auto num : numSet)
        {
            current = num;
            length = 1;
            if(!numSet.count(current-1))
            {
                while(numSet.count(current+1))
                {
                    current++;
                    length++;
                }
                if( length > maxlength)
                    maxlength = length;
            }
            
            
        }
        return maxlength;
    }
};
