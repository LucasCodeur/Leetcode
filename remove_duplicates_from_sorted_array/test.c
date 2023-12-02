#include <stdbool.h>
#include "test.h"

int should_be_return_nums(void)
{
    int input[] = {1, 2, 3, 4, 5};
    int input_size = sizeof(input) / sizeof(input[0]);

    int* result = removeDuplicates(input, input_size);
    if (result == NULL)
    {
        printf("Test failed: Memory allocation error.\n");
        return 0;
    }

    for (int i = 0; i < input_size; i++)
    {
        if (input[i] != result[i])
        {
            printf("Test failed: Mismatch at index %d.\n", i);
            free(result);
            return false;
        }
    }

    printf("Test passed \n");
    free(result);
    return true;
}

int     should_be_detect_duplicate(void)
{
    int     tab_with_duplicate[] = {1, 2, 3 ,3, 4, 5};
    int     tab_with_duplicate_size = sizeof(tab_with_duplicate) / sizeof(tab_with_duplicate[0]);
    int     result = detect_duplicate(tab_with_duplicate, tab_with_duplicate_size);

    if (result == 1)
        printf("The test is a success\n");
    else
        printf("Test failed\n");
}

void    should_be_delete_duplicate_element_inside_the_int_array(void)
{
    int     array[] = {1, 2, 3, 3, 5, 6, 7};
    int     before_size = sizeof(array) / sizeof(int);

    // Number of element to supp
    int     elements_to_delete = 2;

    delete_elements(array, &before_size, elements_to_delete);

    int     expected_size = sizeof(array) / sizeof(int) - elements_to_delete;
    if (before_size == expected_size)
        printf("successful test: Tne fonction deleted correctly");
    else
        printf("Failed test: The function didn't deleted correlty");
}