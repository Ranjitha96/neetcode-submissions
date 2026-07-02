class Solution {
public:

    string encode(vector<string>& strs) {

        string combined;
        int n = strs.size();
        for(int i=0;i<n;i++)
        {
            int size = strs[i].size();
            combined += to_string(size);
            combined += '#';
            combined += strs[i];
        }
        return combined;   
    }

    vector<string> decode(string s) {

        int leng = s.size(),i=0;
        vector<string> strs;
        
        while(i<leng)
        {
            string word,num;
            while(s[i] !='#')
            {
                num += s[i];
                i++;
            }
            int len = stoi(num);
            i++;
            for(int j=0;j<len;j++)
            {
                word += s[i];
                i++;
            }
            strs.push_back(word);
        }
        return strs;

    }
};
