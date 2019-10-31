#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <omp.h>
#include <ctype.h>
#include"mathroid.h"


void Resultado(Mathroid matroids[],int largo){
    printf("entro");
#pragma omp parallel
{
    #pragma omp parallel for
    for (int i=0;i<largo;i++) {
        list_each(matroids[i].I,value) {
           if(isalpha(value)!=0){
               printf("char\n");
                printf ("%s ", value);
           }else if(isdigit(value)!=0){
               printf("digit\n");
               printf ("%f ", value);
           }else{
               printf("cual\n");
               printf ("%d ", value);
           }
        }
    }
   }
}

bool intersection(Mathroid array[] ){
    list (typeof(array[0].S), H);
    memset (&H, 0, sizeof (H));
    H= array[0].I;
    list (typeof(array[0].S), Intersection);
    memset (&Intersection, 0, sizeof (Intersection));
    #pragma omp parallel
    {
        list_each(H,value) {
            bool isValue = false;
            #pragma omp parallel for
            for (int i=1;i<2;i++) {
                list_each(array[i].I,element2){
                  if ((typeof(array[0].S)) value==(typeof(array[0].S)) element2) { //Compare the elements
                    isValue = true;
                    printf ("%s ", "YAS");
                    break;
                    }
                }
            }
            if (isValue){
                list_push (Intersection, value);
           }
        }
   }
    list_each(Intersection,value){
        printf ("%d ", value);
    }
}
int main (){

    list (int, S);
    list (int, I);
    memset (&S, 0, sizeof (S));
    memset (&I, 0, sizeof (I));
    list_push (S, 5);
    list_push (S, 4);
    list_push (S, 23);


    list (char*, I2);
    memset (&I2, 0, sizeof (I2));
    list (char*, S2);
    memset (&S2, 0, sizeof (S2));
    list_push (S2, "ana");
    list_push (S2, "qwef");
    list_push (S2, "grwrg");

    list (char*, I3);
    memset (&I3, 0, sizeof (I3));
    list (char*, S3);
    memset (&S3, 0, sizeof (S3));
    list_push (S3, 'd');
    list_push (S3, '#');
    list_push (S3, 'f');
    //listas para el punto b
    list (int, S4);
    list (int, I4);
    memset (&S4, 0, sizeof (S4));
    memset (&I4, 0, sizeof (I4));
    list_push (S4, 5);
    list_push (S4, 4);
    list_push (S4, 23);
    list (int, S5);
    list (int, I5);
    memset (&S5, 0, sizeof (S5));
    memset (&I5, 0, sizeof (I5));
    list_push (S5, 5);
    list_push (S5, 4);
    list_push (S5, 23);
    list (int, S6);
    list (int, I6);
    memset (&S6, 0, sizeof (S6));
    memset (&I6, 0, sizeof (I6));
    list_push (S6, 5);
    list_push (S6, 4);
    list_push (S6, 23);
    list (int, S7);
    list (int, I7);
    memset (&S7, 0, sizeof (S7));
    memset (&I7, 0, sizeof (I7));
    list_push (S7, 5);
    list_push (S7, 4);
    list_push (S7, 23);

    Mathroid matroid1={.S=S, .I=I, .function=belongsInt};
    Mathroid matroid2={.S=S2,.I=I2,.function=belongsString};
    Mathroid matroid3={.S=S3,.I=I3,.function=belongsChar};
    Mathroid matroid4={.S=S4, .I=I4, .function=belongsInt};
    Mathroid matroid5={.S=S5, .I=I5, .function=belongsInt};
    Mathroid matroid6={.S=S6, .I=I6, .function=belongsInt};
    Mathroid matroid7={.S=S7, .I=I7, .function=belongsInt};
    matroid1.I=insert(matroid1).I;
    matroid2.I=insert(matroid2).I;
    matroid3.I=insert(matroid3).I;
    matroid4.I=insert(matroid4).I;
    matroid5.I=insert(matroid5).I;
    matroid6.I=insert(matroid6).I;
    matroid7.I=insert(matroid7).I;
    //what
    Mathroid mat[3];
    mat[0]=matroid1;
    mat[1]=matroid2;
    mat[2]=matroid3;

    list_each(mat[0].I,value) {
        printf("%d",value);
    }
    printf("\n");
    list_each(mat[1].I,value) {
        printf("%s",value);
    }
    printf("\n");
    list_each(mat[2].I,value) {
        printf("%c",value);
    }

    Mathroid array[10];


    array[0]= matroid1;
    array[1]= matroid4;
    array[2]= matroid5;
    array[3]= matroid6;
    array[4]= matroid7;
    intersection(array );
    return 0;
}
