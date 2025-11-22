class Solution {
public:
    int maxArea(vector<int>& height) {
       
    int lp = 0;
    int rp = height.size() - 1;
    int maxWater = 0;
    while (rp > lp)
    {
        int width = rp - lp;
        int h = min(height[rp], height[lp]);
        maxWater = max(width * h, maxWater);

        if (height[rp] > height[lp])
        {
            lp++;
        }
        else
        {
            rp--;
        }
    }
    return maxWater;
    }
};