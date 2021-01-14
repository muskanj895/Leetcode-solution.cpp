class Solution {
public:
    int trap(vector<int>& height) {
        int left_max=0, right_max=0;
        int l=0; int r=height.size()-1;
        int result=0;
        while(l<=r)
        {
            if(height[l]<height[r])
            {
                if(height[l]>left_max)
                {
                    left_max=height[l];
                }
                else
                {
                    result += left_max -height[l];
                    l++;
                }
            }
            else
            {
                if(height[r]>right_max)
                {
                    right_max=height[r];
                }
                else
                {
                    result += right_max - height[r];
                    r--;
                }
            }
        }
        return result;
    }
};
