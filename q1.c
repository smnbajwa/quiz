#include <stdio.h>

void squares(int m, int n)
{
    if (m == n)
    {
        printf("%dx%d\n", m, n);
        return;
    }
    
    else if (m > n)
    {
        squares(n, n);
        squares(m - n, n);
    }

    else
    {
        squares(m , m);
        squares(m, n - m);
    }
}

int main()
{
    int m, n;
    printf("Enter values of M and N separated by space: \n");
    scanf("%d %d", &m, &n);
    squares(m, n);
    return 0;
}
