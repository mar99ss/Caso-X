#include <stdio.h>
#include <omp.h>
#include <mathroid.h>
#include <linkdlst.h>
#include <assert.h>
bool intersection(Mathroid array[] ){
    list (typeof(array[0].S), H);
    memset (&H, 0, sizeof (H));
    H= array[0].I;
    list (typeof(array[0].S), Intersection);
    memset (&Intersection, 0, sizeof (Intersection));
    #pragma omp parallel
    {
        #pragma omp parallel for
        list_each(H,value) {
            bool isValue = false;
            #pragma omp parallel for
            for (int i=1;i<2;i++) {
                #pragma omp parallel for
                list_each(array[i].I,element2){
                  if ((typeof(array[0].S)) value==(typeof(array[0].S)) element2) { //Compare the elements
                    isValue = true;
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

    belongsString("ana");
    belongsChar('q');
    list (int, S);
    list (int, I);
    memset (&S, 0, sizeof (S));
    memset (&I, 0, sizeof (I));
    assert (list_length (S) == 0);
    list_push (S, 1);
    list_push (S, 2);
    list_push (I, 3);
    list_push (I, 5);
    list_push (I, 6);

    list (int, asd);
    list (int, I2);
    memset (&asd, 0, sizeof (asd));
    memset (&I2, 0, sizeof (I2));
    list_push (I2, 4);
    list_push (asd, 5);
    list_push (asd, 6);

    list_push (I2, 5);
    list_push (I2, 6);

    Mathroid array[10];
    Mathroid n={.S=S, .I=I, .function=belongsInt};

    Mathroid m ={.S=asd, .I=I2, .function= belongsChar};
    array[0]= n;
    array[1]= m;

    intersection(array );
    return 0;


}
