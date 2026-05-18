class Solution {
public:
    int maxArea(vector<int>& heights) {
        int st = 0 , dr = heights.size() - 1;
        int max = -1;
        int i,j;
        while(st < dr)
        {
            int area = (dr - st) * min(heights[st],heights[dr]);
            if(  area > max ) 
            {
                max = area; 
            }
            if( heights[dr] <= heights[st]) dr--;
            else if(heights[st] <= heights[dr]) st++;
        }
        return max; 
    }
};
