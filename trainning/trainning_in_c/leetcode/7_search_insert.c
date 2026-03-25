#include <stdio.h>
#include <stdlib.h>



int searchInsert(int* nums, int numsSize, int target)
{
	int index = -1;

	for (int i  = 0; i < numsSize; i++){
		if (nums[i] == target)
		{
			index = i;
		}
	}

	if (index == -1)
	{
		int found = 0;

		for (int i = 0; i < numsSize; i++){
			if (nums[i] > target)
			{
				index = i;
				found = 1;
				break;
			}
		}

		if (!found)
		{
			return numsSize;
		}	
	}
	return index;
}

int main(void)
{
	int nums[] = {1, 3, 5, 6};
	int numsSize = 4;
	
	printf("%d\n", searchInsert(nums, numsSize, 5));
	printf("%d\n", searchInsert(nums, numsSize, 2));
	printf("%d\n", searchInsert(nums, numsSize, 7));
	return 0;
}
