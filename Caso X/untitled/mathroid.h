#ifndef MATHROID_H
#define MATHROID_H
#include <stdio.h>
#include <stdbool.h>
#include <linkdlst.h>
#include <string.h>
typedef void* dataType;
typedef struct Mathroid{
    list(dataType,S);
    list(dataType,I);
    bool (*function)();

} Mathroid;
//string palindromo
//char si pertenece al alfabeto o a numeros del 0 al 9
//int si es primo
//bool....ni idea

bool belongsString(char* pString){
    char *ptr, *rev;
    ptr =pString;
    while (*ptr != '\0') {
        ++ptr;
    }
    --ptr;
    for (rev = pString; ptr >= rev;) {
        if (*ptr == *rev) {
            --ptr;
            rev++;
        }
        else
            break;
    }

    if (rev > ptr)
        return true;
    else
        return false;
}
bool belongsChar(char pChar){
    if((pChar >= 'a' && pChar <= 'z') ||
               (pChar >= 'A' && pChar <= 'Z') ||
            (pChar >= '0' && pChar <= '9')){
        return true;
    }
    else{
        return false;
    }
}

bool belongsInt(int pNumero){
    int primo,divisores;
    if(pNumero!=0){
        // el numero es valido comprobar si es primo
        primo=0;
        divisores=2;
        while(divisores<pNumero  && primo!=1){
            if(pNumero%divisores==0) primo=1;
            divisores++;
        }
        // Si primo vale 0 es que el numero es primo
        if (primo==0){
            printf("yes");
            return true;
        }
        else{
            return false;
        }
    }else{
        return false;
    }
}

bool belongsBool(bool pBool){

}

#endif // MATHROID_H
