#ifndef MATHROID_H
#define MATHROID_H
#include <stdio.h>
#include <stdbool.h>
#include <list.h>

typedef void* dataType;
define_list(dataType);

typedef struct Mathroid{
    List(dataType)*S;
    List(dataType)*I;
    bool (*function)();

} Mathroid;
#endif // MATHROID_H
