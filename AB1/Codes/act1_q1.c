/**!
 * @file act1_q1.c
 * @author Edvonaldo Horácio (edvonaldohs@ic.ufal.br)
 * @brief
 * @version 0.1
 * @date 2019-06-28
 *
 * @copyright Copyright (c) IC 2018
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char **argv)
{
    int sum = 0;
    int N = 100;
    int a[N], b[N];
    int i;

    // Initialization
    for(i = 0; i < N; i++)
    {
        a[i] = b[i] = 1;
    }

    #pragma omp parallel
    {
        // Dot product
        #pragma omp for reduction(+:sum)
        for(i = 0; i < N; i++)
        {
            sum += a[i]*b[i];
        }
    }
    printf("Dot product: %d\n", sum);
    return 0;
}