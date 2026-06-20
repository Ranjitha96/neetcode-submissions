class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int> freq(26);
        if(s.size() != t.size())
            return false;
        for(int i=0;i<s.size();i++)
            freq[s[i]-'a']++;
        for(int i=0;i<t.size();i++)
            freq[t[i]-'a']--;
        for(int x : freq)
        {
            if(x!=0)
                return false;
        }
        return true;        
    }
};
