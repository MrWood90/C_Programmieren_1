#include <stdio.h>

int main()
{
    //declaration and initialization
    unsigned int end_year_uint = 10;
    double base_float = 1000;
    double i_rate_float = 0.034;
    unsigned int i = 0;

    //program - calculation and output
    printf("\n------ year: %d - capital: %.2f EUR ------\n",i ,base_float);
    for (i = 1; i <= end_year_uint; ++i)
    {
        base_float = base_float + base_float * i_rate_float;
        printf("------ year: %d - capital: %.2f EUR ------\n",i ,base_float);
    }
}

