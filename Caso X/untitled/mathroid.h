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
        printf("YAS");
        return true;
    }
    else{
        return false;
    }
}

bool belongsInt(int pInt){

}

bool belongsBool(bool pBool){

}

#endif // MATHROID_H
