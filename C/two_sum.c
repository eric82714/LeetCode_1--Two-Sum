/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize = 2;
    int* index = (int*)malloc(*returnSize * sizeof(int));
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = i+1; (j < numsSize && j != i); j++)
        {
            if((*(nums+i) + *(nums+j)) == target)
            {
                *index = i;
                *(index+1) = j;
            }
        }
    }    
    return index;
}
