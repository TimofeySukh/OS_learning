#include <stdio.h>
int factorial (int n);
int main ()
{
    int limit;
    printf("whats up what is the limit: ");
    scanf("%d", &limit);
    for (int i=1; i<=limit; i++)
    {
        printf("%d == %d ", i, factorial(i));
    }
}
int factorial(int n) {
    int res;
    if (n == 1)
        return 1;
    else
        for (int i=2; i<=n; i++)
            res = res * i;
        return res;

}
