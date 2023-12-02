#include "test.h"

int    delete_elements(int array[], int size)
{
    int     *new_array = (int *)malloc((size) * sizeof(int));
    if (new_array == NULL)
        return 0;
    new_array[0] = array[0];
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (new_array[i] != array[j])
                new_array[i + 1] == array[j];
        }
    }
}

int     detect_duplicate(int nums[], int nums_size)
{
    for (int i = 0; i < nums_size - 1; i++)
    {
        for (int j = i + 1; j < nums_size; j++)
            if (nums[i] == nums[j])
            {
                printf("Duplicate is detect\n");
                return 1;
            }
    }
    printf("No duplicate detect");
    return 0;
}

/*int     *removeDuplicates(int* nums, int numsSize)
{
    int* array = (int *)malloc(numsSize * sizeof(int));
    if (array == NULL)
        return 0;
    for (int i = 0; i < numsSize; i++)
    {
        array[i] = nums[i];
        printf("%d ", array[i]);
    }
    return array;
}*/

// Final removeduplicate
int     removeDuplicates(int nums[], int numsSize)
{
    delete_elements(nums, numsSize);
    return 0;
}


int     main()
{
    int     nums1[] = {1, 1, 2, 3, 4};
    int     nums_size;

    nums_size = sizeof(nums1) / sizeof(nums1[0]); // Initialisez nums_size correctement
    removeDuplicates(nums1, nums_size);
    for (int i = 0; i < nums_size; i++)
        printf("%d ",nums1[i]);

    return 0;
}
