class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int n = position.size();
        stack<float> cars;
        int fleet = 0;
        vector<pair<int,int>> sortPos;
        for(int i=0;i<n;i++)
        {
            sortPos.push_back({position[i],speed[i]});
        }
        sort(sortPos.rbegin(),sortPos.rend());
        for(auto sortP : sortPos )
        {
        
            float time = (float)(target-sortP.first)/sortP.second;

            if(cars.empty() || time>cars.top())
            {
                cars.push(time);
                fleet++;
            }
        }
        return fleet;

    }
};
