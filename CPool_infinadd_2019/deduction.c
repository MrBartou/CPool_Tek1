/*
** EPITECH PROJECT, 2019
** infin_add
** File description:
** create a focntion for deduction
*/
#include "include/my.h"

int deduction(char *result, int i){
    int retenue = 0;

    if (result[i] > 9) { 
        retenue = retenue + 1;
        result[i] = result[i] - 10;
    }
    return(retenue);
}