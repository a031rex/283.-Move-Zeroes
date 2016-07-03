#include "stdio.h"
#include "stdlib.h"

/*
https://leetcode.com/problems/move-zeroes/

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.

*/
#if 0//bubble concept

void swap(int *i,int *j)
{
    int tmp = *i;
    *i = *j;
    *j = tmp;
}

void moveZeroes(int* nums, int numsSize)
{
    int i = 0;
    int j = 0;
    int a;
    for(i=0; i<numsSize; i++)
    {
        if(nums[i] == 0)// need to swap to back
        {
            int tmp = i;
            for(j=tmp+1; j<numsSize; j++)
            {
                if(nums[tmp]!=nums[j])
                {
                    swap(&(nums[tmp]),&(nums[j]));
                    tmp=j;
                }
            }
        }
    }
}
#endif
void moveZeroes(int* nums, int numsSize)
{
	int i = 0;
	int pos = 0;
	int count = 0;
	for(i=0;i<numsSize;i++)
	{
		if(nums[i]!=0)
		{
			nums[count++] = nums[i];
		}
	}
	for(i=count;i<numsSize;i++)
	{
		nums[i] = 0;
	}
}
void main()
{
    int nums[] = {0,0,1};
    int size = sizeof(nums)/sizeof(nums[0]);
    int i=0;
    moveZeroes(nums,size);
    for(i=0; i<size; i++)
    {
        printf("%d ",nums[i]);
    }
}

