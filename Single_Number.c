int singleNumber(int* nums, int numsSize) {
int result;
    for (int i=0;i<numsSize;i++)
    {
       
        int count=1;
        int k=nums[i];
        for(int j=0;j<numsSize;j++)
        {
            if(j!=i)
            {
                if(nums[j]==k)
                {
                    count++;
                }
            }



        }
        if(count==1)
        {
            result=k;
        }
        
        
    }
   return result; 
}