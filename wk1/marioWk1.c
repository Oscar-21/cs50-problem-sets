#include <stdio.h>
#include "cs50.h" /* Library provided by harvard's free online intro to compsci course */
#include "pyramid.h" /* I have defined the function half_pyramid here for modularities sake */

int main(void)
{
	
	// prompt user for height of pyramid
	// and save result in variable pyr_ht

	printf("Number of rows:");
        int pyr_ht = GetInt();
	

        /* conditional statement that reprompts
           user if they give a value of x 
           such that x > 23 or x < 0. 
        */
        
	while( pyr_ht > 23 || pyr_ht < 0)
	{
	   printf("Retry:\n");
	   pyr_ht = GetInt();
	}

        // Will print half pyramid
        // to given height

        half_pyramid(pyr_ht);
}
