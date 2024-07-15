#include <stdio.h>
#include "calc.h"

//TODO: Handle implicit multiplication eg. 2(2)
int main(int argsc, char **argsv)
{
        /* number of history elements */
        Calculator *calculator = init_calculator(5);

        if (argsc != 2)
        {
                printf("USE: calc <expr>\n");
        }

        double result = calculate_expr(calculator, argsv[1]);
        printf("%.2f\n", result);

        destroy_calculator(calculator);
}
