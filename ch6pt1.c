/*
ARRAYS
data structures that consist of related data items of the same type.(every cell must have exact same data type)
arrays and structures are static(remain the same size throughout the program executtion)

array is a group of contiguous memory locations that all have the same type.
Block that has multiple cells. each cell is the same size and data type. 

refering to specific locations in the array, the array's name and position number of element is specified.
EXAMPLE C[12]       C is the array name 12 is the position number of the element(index)

arrays start at 0
array's name can only have letters, numbers, and underscores (no spaces and cant start with number)

[] = array
() = function operators

arrays occupy space in memory
int c[12];  //reserves 12 elements for integer array c in range of 0-11
*/

#include<stdio.h>

int main(void){
    int n[5];

    for(size_t i = 0; i < 5; ++i){
        n[i] = 0;
    }

    printf("%s%13s\n", "Element", "Value");

    for(size_t i = 0; i < 5; ++i){
        printf("%7u%13d\n", i, n[i]);
    }
}