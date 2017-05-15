/* greedy is a program that can be used
 * by any concientious cashier
 * who would like to:
 *    
 *	1. Provide any amount of change
 *         using only coins.
 *       
 *      2. Use the least amount of those
 *         coins as possible.
 * */

#include <stdio.h> 
#include "cs50.h"

int main(void)
{
        // We will use a_owed to store the exact amount of change
	// that is owed. We use double for greater accuracy
	// and because this program will not
	// calculate negative change amounts   
       
       	double a_owd;
       
	// Initialize variable that will eventually be used to store
	// change owed as an integer.
	
       	int i_owd;
	
	// Store coin values as integers.

        int quarter= 25;
        int dime = 10;
        int nickel = 5;
        int penny = 1;
	
	// Initialize variable to store the
	// most effiecient change allocation
	// as it is generated through an
	// iterative process.

        int change_counter = 0;

	// Three things are happening in this block:
	// 1. User is being prompted for the exact 
	//    amount of change owed until they give 
	//    a value >= 0.
	// 2. That value is stored in variable a_owd.
	// 3. a_owd is converted to an integer to store 
	//    the least effeicient solution.
	//    For ex:
	//    change_owed = 1 dollar bill
	//    chang_owed * 100 = 100 pennies

        printf("Amount of change owed:");
        a_owd = GetDouble();
        
        while( a_owd < 0 )
        {
           printf("Surley, I don't owe you negative change!\n");
           printf("Try again:");
           a_owd = GetDouble();
        }

	i_owd = a_owd * 100;

	// This block uses conditional statements and iteration
	// to calculate the least possible amount 
	// of times i_owd can be evenly divided by
	// the coin values.
	
           while( quarter< i_owd || quarter == i_owd )
           {
               change_counter++;
               i_owd = i_owd - quarter;
           }   
         
           while( dime  < i_owd || dime  == i_owd )
           {
              
              change_counter ++;
              i_owd = i_owd - dime;
           }
        
	    while( nickel < i_owd || nickel == i_owd )
           {
              
              change_counter++;
              i_owd = i_owd - nickel;
           }

           while( penny < i_owd || penny == i_owd )

           {
                        
             change_counter++;
              i_owd = i_owd - penny;
           }

           printf("%i\n", change_counter );
}
