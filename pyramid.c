/*
 * =====================================================================================
 *
 *       Filename:  pyramid.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/14/2017 12:41:15 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Austin Conder (), austin.conder@outlook.com
 *   Organization:  Mr. Solo Dolo
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "cs50.h"


void half_pyramid(int row_num)
{
   int counter = 2;
   int hash_row = row_num;
   int space_row = row_num;
   int spaces;
   int hashes;

  for ( int i = 0; i < row_num; i++) 
  {
    printf ( " " );
  }
  printf ( "#\n" );

   for( int i = row_num; i > 0 && i <= row_num; i--)
   {	   
      spaces = space_row - counter;
      hashes = hash_row - (row_num - 1);
       // while loop to create spaces
       while( spaces >= 0 )
       {
          printf(" ");
          spaces--;
       }
       
      /* while loop to create blocks of pyrm. using                   
       * hash symbols */                                      
      while( hashes >= 0 )                                          
      {                                                                   
	 printf("#");                                                         
	 hashes--;  
      }
         /* line break to create the successive rows for  
	  * our half pyramid */
         printf("\n");
	 spaces = counter;
	 hashes = counter;
	 row_num--;
	 counter++;
          
    }	  
} 
