class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m1=-1, m2=-1;
        int i=0;
        int j=0;
        int n =nums1.size();
        int m=nums2.size();
        if((n+m)%2 == 1)
        {
            for(int count =0; count<=(n+m)/2;count++)
            {
                if(i != n && j != m)
                {
                    m1=nums1[i]>nums2[j]? nums2[j++] : nums1[i++];
                }
                else if(i< n)
                    m1=nums1[i++];
                else
                    m1=nums2[j++];
                
            }
            return m1;
        }
        else
        {
            for(int count=0;count<=(n+m)/2;count++)
            {
                m2 =m1;
                if(i != n && j != m)
                {
                    m1=nums1[i]>nums2[j]? nums2[j++] : nums1[i++];
                }
                 else if(i< n)
                    m1=nums1[i++];
                else
                    m1=nums2[j++];
                
            }
            return (m1+m2)/2.0;
            }
        }
        
    
};
