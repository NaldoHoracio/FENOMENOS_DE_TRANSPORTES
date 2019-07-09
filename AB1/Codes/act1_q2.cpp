/**!
 * @file act1_q2.cpp
 * @author Edvonaldo Horácio (edvonaldohs@ic.ufal.br)
 * @brief
 * @version 0.1
 * @date 2019-06-28
 *
 * @copyright Copyright (c) IC 2018
 *
 */
#include <iostream>
#include <cstdlib>
#include <new>
#include <omp.h>

using namespace std;

int main(int argc, char **argv)
{
    int sum = 0;
    int N = 100;
    int *a = new int(N);
    int *b = new int(N);
    int i;

    // Initialization
    for(i = 0; i < N; i++)
    {
        a[i] = b[i] = 1;
    }

    double start = omp_get_wtime();
    #pragma omp parallel
    {
        // Dot product
        for(i = 0; i < N; i++)
        {
            sum += a[i]*b[i];
        }
    }
    double end = omp_get_wtime();
    cout << "Dot Product: " << sum << endl;
    a = NULL;
    b = NULL;
    cout << "Elapsed time: " << end - start << endl;
    // if(a == NULL) cout << "Vector A is deallocated!" << endl;
    // else cout << "Vector A is not deallocated!" << endl;
    // if(b == NULL) cout << "Vector B is deallocated!" << endl;
    // else cout << "Vector B is not deallocated!" << endl;

    
    return 0;
}