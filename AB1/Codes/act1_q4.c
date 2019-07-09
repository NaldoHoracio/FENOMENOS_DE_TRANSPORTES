/**!
 * @file act1_q4.c
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
    int num_thread = 1;
    int i;
    double start = 0, end = 0;

    // 1 THREAD
    // Initialization
    for(i = 0; i < N; i++) a[i] = b[i] = 1;
    start = omp_get_wtime();
    #pragma omp parallel num_threads(num_thread)
    {
        // Dot product
        for(i = 0; i < N; i++)
        {
            sum += a[i]*b[i];
        }
    }
    end = omp_get_wtime();
    printf("Numero de threads: %d\n", num_thread);
    printf("Dot Product: %d\n", sum);
    printf("Elapsed time %.9f\n", end - start);
    printf("\n\n");

    // 2 THREADS
    sum = 0;
    start = end = 0;
    num_thread++;
    for(i = 0; i < N; i++) a[i] = b[i] = 1;
    start = omp_get_wtime();
    #pragma omp parallel num_threads(num_thread)
    {
        // Dot product
        for(i = 0; i < N; i++)
        {
            sum += a[i]*b[i];
        }
    }
    end = omp_get_wtime();
    printf("Numero de threads: %d\n", num_thread);
    printf("Dot Product: %d\n", sum);
    printf("Elapsed time %.9f\n", end - start);
    printf("\n\n");

    // 3 THREADS
    sum = 0;
    start = end = 0;
    num_thread++;
    for(i = 0; i < N; i++) a[i] = b[i] = 1;
    start = omp_get_wtime();
    #pragma omp parallel num_threads(num_thread)
    {
        // Dot product
        for(i = 0; i < N; i++)
        {
            sum += a[i]*b[i];
        }
    }
    end = omp_get_wtime();
    printf("Numero de threads: %d\n", num_thread);
    printf("Dot Product: %d\n", sum);
    printf("Elapsed time %.9f\n", end - start);
    printf("\n\n");

    // 4 THREADS
    sum = 0;
    start = end = 0;
    num_thread++;
    for(i = 0; i < N; i++) a[i] = b[i] = 1;
    start = omp_get_wtime();
    #pragma omp parallel num_threads(num_thread)
    {
        // Dot product
        for(i = 0; i < N; i++)
        {
            sum += a[i]*b[i];
        }
    }
    end = omp_get_wtime();
    printf("Numero de threads: %d\n", num_thread);
    printf("Dot Product: %d\n", sum);
    printf("Elapsed time %.9f\n", end - start);
    printf("\n\n");

    // 5 THREADS
    sum = 0;
    start = end = 0;
    num_thread++;
    for(i = 0; i < N; i++) a[i] = b[i] = 1;
    start = omp_get_wtime();
    #pragma omp parallel num_threads(num_thread)
    {
        // Dot product
        for(i = 0; i < N; i++)
        {
            sum += a[i]*b[i];
        }
    }
    end = omp_get_wtime();
    printf("Numero de threads: %d\n", num_thread);
    printf("Dot Product: %d\n", sum);
    printf("Elapsed time %.9f\n", end - start);
    printf("\n\n");

    // 6 THREADS
    sum = 0;
    start = end = 0;
    num_thread++;
    for(i = 0; i < N; i++) a[i] = b[i] = 1;
    start = omp_get_wtime();
    #pragma omp parallel num_threads(num_thread)
    {
        // Dot product
        for(i = 0; i < N; i++)
        {
            sum += a[i]*b[i];
        }
    }
    end = omp_get_wtime();
    printf("Numero de threads: %d\n", num_thread);
    printf("Dot Product: %d\n", sum);
    printf("Elapsed time %.9f\n", end - start);
    printf("\n\n");

    // 7 THREADS
    sum = 0;
    start = end = 0;
    num_thread++;
    for(i = 0; i < N; i++) a[i] = b[i] = 1;
    start = omp_get_wtime();
    #pragma omp parallel num_threads(num_thread)
    {
        // Dot product
        for(i = 0; i < N; i++)
        {
            sum += a[i]*b[i];
        }
    }
    end = omp_get_wtime();
    printf("Numero de threads: %d\n", num_thread);
    printf("Dot Product: %d\n", sum);
    printf("Elapsed time %.9f\n", end - start);
    printf("\n\n");

    // 8 THREADS
    sum = 0;
    start = end = 0;
    num_thread++;
    for(i = 0; i < N; i++) a[i] = b[i] = 1;
    start = omp_get_wtime();
    #pragma omp parallel num_threads(num_thread)
    {
        // Dot product
        for(i = 0; i < N; i++)
        {
            sum += a[i]*b[i];
        }
    }
    end = omp_get_wtime();
    printf("Numero de threads: %d\n", num_thread);
    printf("Dot Product: %d\n", sum);
    printf("Elapsed time %.9f\n", end - start);
    printf("\n\n");

    return 0;
}