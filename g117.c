/*Raj is participating in a coding competition where he needs to solve a problem using arrays. He comes across a problem where he needs to find the second-largest element in an array.



Raj decides to write a program to solve the problem efficiently.

Input format :
The first line of input contains an integer n, denoting the size of the array.

The second line contains n space-separated integers, representing the elements of the array.

Output format :
The output displays an integer, representing the second-largest element of the array.

*/

#include<stdio.h>
int main()
{
    int a[50], size, i, j = 0, big, sec_big;
    scanf("%d", &size);
    for(i=0; i<size; i++)
        scanf("%d", &a[i]);
    big=a[0];
    for(i=1;i<size;i++)
    {
        if(big<a[i])
        {
            big=a[i];
            j = i;
        }
    }
    sec_big =a[size-j-1];
    for(i=1;i<size;i++)
    {
        if(sec_big <a[i] && j != i)
            sec_big =a[i];
    }
    printf("%d", sec_big);
    return 0;
}
