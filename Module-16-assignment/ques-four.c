#include <stdio.h>
// Has Return + Parameter
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
// Has Return + No Parameter
float pi()
{
    return 3.14159;
}
// No Return + Parameter
void array(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// No Return + No Parameter
void morning()
{
    printf("Good Morning!\n");
}
int main()
{
    // Call function with no arguments and no return value
    print_hello();

    // Call function with no arguments and a return value
    int random_num = get_random_number();
    printf("Random number: %d\n", random_num);

    // Call function with arguments and no return value
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    print_array(arr, size);

    // Call function with arguments and a return value
    int a = 10;
    int b = 20;
    int max_num = max(a, b);
    printf("Max number: %d\n", max_num);

    return 0;
}