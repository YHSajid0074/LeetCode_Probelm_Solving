int maximumCount(int* nums, int numsSize) {
    int count=0;
    int sount=0;
    for(int i=0;i<numsSize;i++){
if(nums[i]>0){
    count++;
}
if(nums[i]<0)
sount++;
    }
    if(count>=sount){
        return count;
    }return sount;
}