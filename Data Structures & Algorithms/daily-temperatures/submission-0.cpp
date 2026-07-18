class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();
        stack<int> tempInd;
        vector<int> result(n,0);
        for(int i=0;i<n;i++)
        {
            while(!tempInd.empty() && (temperatures[i] > temperatures[tempInd.top()]))
            {
                int prevDay = tempInd.top();
                tempInd.pop();
                result[prevDay] = i-prevDay;
                
            }
            tempInd.push(i);
        }
        return result;
        
        
    }
};
