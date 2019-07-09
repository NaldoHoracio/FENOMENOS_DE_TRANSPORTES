/**!
 * @file act2_q3.c
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
    int M = 100, N = 1000;
    int a[M][N], b[M][1], sum[M][1];
    int line, column;
    int num_thread = 1;

    // Inicialização
    for (line = 0; line < M; line++)
    {
        for (column = 0; column < N; column++)
        {
            sum[line][1] = 0;
            a[line][column] = 1;
            b[line][1] = 1;
        }
    }
    // Tempo
    double start = omp_get_wtime();
    #pragma omp parallel num_threads(num_thread)
    {
        // Multiplicação
        for (line = 0; line < M; line++)
        {
            for(column = 0; column < N; column++)
            {
                sum[line][1] += a[line][column] * b[line][1];
            }
        }
    }
    double end = omp_get_wtime();
    printf("Numero de threads: %d\n", num_thread);
    printf("Dot Product\n");        
    // Resultado
    for(line = 0; line < M; line++)
    {
        printf("sum[%d][1] = %d\n", line, sum[line][1]);
    }
    printf("Elapsed time %.9f\n", end - start);
    return 0;
}