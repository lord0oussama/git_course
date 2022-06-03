
#include <stdio.h>


void ft_swap(int *a, int *b)
{
    int mpp;
    mpp = *a;
    *a = *b;
    *b = mpp;

}

int main()
{
    int x;
    int y;
    x = 3;
    y = 2;

    ft_swap(&x, &y);

    printf("%d \n", x);
    printf("%d \n", y);
    
        return 0;
}
