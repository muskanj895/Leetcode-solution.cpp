
void rotatebyone(int *nums, int numsSize)
{
    int last = nums[numsSize-1];
    for(int i=numsSize-2;i>=0;i--)
    {
        nums[i+1]=nums[i];
}
    nums[0]=last;
}
void rotate(int* nums, int numsSize, int k){
    for(int i=0;i<k;i++)
        rotatebyone(nums,numsSize);

}
