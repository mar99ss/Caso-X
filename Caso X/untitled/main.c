#include <stdio.h>
#include <omp.h>

struct MatroidInt{
    int MI [5];
    int MS [5];
};


int main (){
    struct MatroidInt array[10];
    struct MatroidInt n={
        {0,1,2,3,4},
        {5,6,7,8,9}
        };
    struct MatroidInt m={
        {0,4,6,8,3},
        {2,5,8,3,9}
        };
    array[0]= n;
    array[1]= m;
    #pragma omp parallel
    {
        #pragma omp parallel for num_threads(2)
        for (int i=0;i<2; i++){
            for (int j=0; j<5; j++){
               printf("%d", array[i].MS[j]);
               printf("\n");
            }
        }
    }
    return 0;
}
