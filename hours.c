#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Number of weeks taking CS50: ");
    int array[n], sum = 0, avarage = 0;
    for (int i = 0; i < n; i++)
    {
        array[i] = get_int("Week %i HW Hours: ", i);
        sum += array[i];
        avarage = sum / n;
    }
    char s = get_char("Enter T for total hours, A for average hours per week: ");
    if (s == 'T')
    {
        printf("%.1f hours\n", (float) sum);
    }
    else if (s == 'A')
    {
        printf("%.1f hours\n", sum /(float) n);
    }
}
