#include <stdio.h>
int main()
{
    int a1 = 0, a2 = 1, sonraki = 0, n;
    printf("pozitif sayi giriniz:");
    scanf("%d", &n);
    // ilk 2 adım 0 1
    printf("Fibonacci Series: %d, %d, ", a1, a2);
    sonraki = a1 + a2;
    while(sonraki <= n)// girilen sayının bi kücügüne kadar fib devam eder
    {
        printf("%d, ",sonraki);
        a1 = a2;
        a2 = sonraki;
        sonraki = a1 + a2;
       
    }
     system("pause");
    return 0;
}