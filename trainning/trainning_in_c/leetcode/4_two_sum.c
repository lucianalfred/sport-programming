#include <stdio.h>
#include <stdlib.h>

int	*twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	int	*result;
	int	sum;

	result = (int *)malloc(sizeof(int) * 2);
	if (!result)
		return (NULL);
	*returnSize = 2;
	for (int i = 0; i < numsSize; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			int sum = nums[i] + nums[j];
			if (i != j && sum == target)
			{
                result[0] = i;
                result[1] = j;
			}
		}
	}
	return (result);
}

int	main(void)
{
	int returnSize;
	int nums[4] = {2,7,11,15};
	int numsSize = 4;
	int target = 9;

	int *result = twoSum(nums, numsSize, target, &returnSize);
	printf("\n[");
	for (int i = 0; i < returnSize; i++)
	{
		printf("%d", result[i]);
		if (i + 1 < returnSize)
		{
			printf(",");
		}
	}
	printf("]\n");
}