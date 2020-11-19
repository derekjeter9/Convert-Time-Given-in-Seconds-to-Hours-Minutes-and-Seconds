#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h=0, m=0, s=0;;
    printf("Please enter the number of seconds: ");
    scanf("%d", &s);
    h = s / 3600;
    s = s % 3600;

    m = s / 60;
    s = s % 60;

    printf("\nHours: %d", h);
    printf("\nMinutes: %d", m);
    printf("\nSeconds: %d", s);
    return 0;


}
