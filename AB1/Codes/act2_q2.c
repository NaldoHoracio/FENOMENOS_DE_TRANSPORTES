/**!
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
    int M = 100, N = 100;
    int a[M][N], b[M][1], sum[M][1];
    int line, column;

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
    double start = omp_get_wtime();
    // Multiplicação
    #pragma omp parallel num_threads(8)
    {
        for (line = 0; line < M; line++)
        {
            for(column = 0; column < N; column++)
            {
                sum[line][1] += a[line][column] * b[line][1];
            }
        }
    }
    double end = omp_get_wtime();
        
    // Resultado
    for(line = 0; line < M; line++)
    {
        printf("sum[%d][1] = %d\n", line, sum[line][1]);
    }
    printf("Elapsed time: %.9f\n", end - start);
    return 0;
}