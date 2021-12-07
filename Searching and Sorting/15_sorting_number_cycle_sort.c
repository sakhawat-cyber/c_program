/*
Write a C program that sort numbers using 
Cycle sort method. 
Cycle sort is an in-place, unstable 
sorting algorithm, a comparison sort 
that is theoretically optimal in terms 
of the total number of writes to the 
original array, unlike any other 
in-place sorting algorithm. It is based 
on the idea that the permutation to be 
sorted can be factored into cycles, which 
can individually be rotated to give a 
sorted result.
*/

#include <stdio.h>

int cycleSort(int *list, int len)
{
    //sort an array in place and return the number of writes
    //loop through the array to find cycle to rotate.
    int cycleStart, writes = 0;
    for (cycleStart = 0; cycleStart < len - 1; ++cycleStart)
    {
        int item = list[cycleStart];
        int swap_temp, i, pos = cycleStart;

        //find where to put the item.
        for (i = cycleStart + 1; i < len; ++i)
        {
            if (list[i] < item)
                ++pos;
        }
        //if the item is alrady there, this is not cycle
        if (pos == cycleStart)
            continue;
        //otherwise, put the item there of right after any duplicates.
        while (item == list[pos])
            ++pos;
        swap_temp = list[pos];
        list[pos] = item;
        item = swap_temp;
        ++writes;
        //rotate the rest of the cycle
        while (pos != cycleStart)
        {
            // find where to put the item
            pos = cycleStart;
            for (i = cycleStart + 1; i < len; ++i)
            {
                if (list[i] < item)
                    ++pos;
            }
            //put the item there or right after any duplicates
            while (item == list[pos])
                ++pos;
            swap_temp = list[pos];
            list[pos] = item;
            item = swap_temp;
            ++writes;
        }
    }
    return writes;
}

int main()
{
    int arr[] = {56, 7, 3, 54, 2, -0, -2, 1, -3}, i;
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("\nOriginal Array: \n");
    for (i = 0; i < len; i++)
        printf("%d%s", arr[i], i == len - 1 ? "\n" : " ");
    cycleSort(arr, len);
    printf("\nSorted Array: \n");
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
    return 0;
}
