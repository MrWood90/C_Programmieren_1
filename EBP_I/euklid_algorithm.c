#include <stdio.h>
//local function to calculate the GCD
int calc_GCD_func(int val1_int, int val2_int)
{
    int temp_val_int;
    while(val2_int != 0)
    {
        temp_val_int = val2_int;
        val2_int = val1_int % val2_int;
        val1_int = temp_val_int;
    }
    return val1_int;
}

int main()
{
    //initialization
    int user_input1_int, user_input2_int, result_gcd;
    char user_condition;
    //program with terminate condition
    do
    {
        //user input
        printf("Enter the first value (int):_");
        scanf(" %d", &user_input1_int);
        printf("Enter the second value (int):_");
        scanf(" %d", &user_input2_int);
        // calculation and outprint
        result_gcd = calc_GCD_func(user_input1_int,user_input2_int);
        printf("The greates common divisor [GCD] is :_%d", result_gcd);
        //break condition
        printf("\nCalculate another GCD? (y/...):_");
        scanf(" %c", &user_condition);
    } while (user_condition == 'y');
    printf("--- Program terminated ---\n");
}

