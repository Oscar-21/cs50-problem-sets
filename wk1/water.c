/*
 * =====================================================================================
 *
 *       Filename:  water.c
 *
 *    Description:  	
 *
 *        Version:  1.0
 *        Created:  01/22/2017 10:53:21 AM
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  Austin Conder (), austin.conder@outlook.com
 *   Organization:  Mr. Solo Dolo
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "cs50.h"


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    printf("minutes:");
    int minutes = GetInt();
    printf("bottles: %i\n", minutes*12);
    return 0;
}				/* ----------  end of function main  ---------- */
