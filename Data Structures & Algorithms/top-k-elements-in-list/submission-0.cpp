class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size(),count;
        unordered_map<int,int> freqMap;
        vector<int> numList;
        vector<pair<int,int>> freqList;
        for(int i=0;i<n;i++)
        {
            freqMap[nums[i]]++;
        }
        for( auto num : freqMap )
        {
            freqList.push_back({num.second,num.first});
        }
        sort(freqList.rbegin(), freqList.rend());
        for(auto num : freqList ) 
        { 
            if(k) 
            { 
                numList.push_back(num.second); 
                k--; 
            } 
        }
        return numList;  
    }
};
