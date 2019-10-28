#include <stdio.h>
#include <omp.h>


struct MatroidInt{
    int MI [5];
    int MS [5] = {3,5,5,6,7};
};


int main (){
    MatroidInt n;
    MatroidInt array[10];
    #pragma omp parallel
    {
        #pragma omp parallel for num_threads(2)
        for (int i=0;i<10; i++){
            for (int j=0; j<5; j++){
               printf("%d", array[i].MS[j]);
               printf("\n");
            }
        }
    }
    return 0;
}
