class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int j=0;
        int size=nums.size();
       if( size==0 || size==1 && nums[0] !=val)
            return size;
        if(nums[0]==val && size==1 )
          return NULL;
        for(int i=0;i<size;)
        {
            if(nums[i] == val)
            {
                i++;                
            }
            else
            {
                nums[j++]=nums[i];
                i++;
            }
        }
        return j;
    }
};
