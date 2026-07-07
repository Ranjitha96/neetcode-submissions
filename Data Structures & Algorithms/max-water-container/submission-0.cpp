class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n = heights.size();
        int left = 0;
        int right = n-1;
        int volume=0,maxvolume = 0;
        while(left < right)
        {
            volume = (right-left)*min(heights[left],heights[right]);
            if(heights[right] > heights[left])
               left++;
            else
                right--;
            if(volume > maxvolume)
                maxvolume = volume;
        }
        return maxvolume;   
    }
};
