#include <stdio.h>
/* pass by value, a data is passed to the function. This means that any changes made to the data within the function do not affect the original data outside the function.*/
void one(int num)
{
    num += 1;
}
/*
pass by reference, a reference to the data is passed to the function. This means that any changes made to the data within the function also affect the original data outside the function
*/
void two(int *num)
{
    *num += 1;
}
int main()
{
    int num = 5;
    one(num);            // pass by value
    printf("%d\n", num); // Output: 5

    two(&num);           // pass by reference
    printf("%d\n", num); // Output: 6
    return 0;
}
