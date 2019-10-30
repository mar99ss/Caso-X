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
        printf("String is Palindrome");
    else
        printf("String is not a Palindrome");
}
bool belongsChar(char pChar){

}
bool belongsBool(bool pBool){

}
bool belongsInt(int pInt){

}

#endif // MATHROID_H
