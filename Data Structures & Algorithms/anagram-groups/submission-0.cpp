class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string,vector<string>> anagram;
        vector<vector<string>> groupAnagram;
        int n = strs.size();
        for(int i=0;i<n;i++)
        {
            string key = strs[i];
            sort(key.begin(),key.end());
            anagram[key].push_back(strs[i]);
        }
        for(const auto& group : anagram)
        {
            groupAnagram.push_back(group.second);
        }
        return groupAnagram;
    }
};
