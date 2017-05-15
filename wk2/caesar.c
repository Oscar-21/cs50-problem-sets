

 /*
 * Filename: caesar.c
 *
 * Description: Encrypts a message using Caeser
 * cipher.
 *
 * Version: 1.0
 * Created: 02/14/2017 08:23:13 PM
 * Revision: none
 * Compiler: Clang
 *
 * Author: Austin Conder (), austin.conder@outlook.com
 * Organization: Mr. Solo Dolo
 *
 * =====================================================================================
 */
#include <stdio.h> 
#include <string.h> 
#include <cs50.h> 
#include <stdlib.h>
#include <ctype.h>


// islower and isupper simply return true
// if a message character matches either a lower or uppr case letter
bool my_islower( int n, char c); 
bool my_isupper( int n, char c); 

// is_digitz checks to see if command line argument is number
bool is_digitz( char number[]);

/*
 * === FUNCTION ======================================================================
 * Name: main
 * Description: Takes numeric command-line arg as key, encrypts message according to ceaser
 *              cipher algorithm, prints encrypted message to terminal.
 * =====================================================================================
 */
int main ( int argc, char* argv[] ) 
{ 
    // program must take at most one arg as a number
    if ( argc > 2 || argc == 1 ) 
    {
        printf ( "Invalid key!\n" );
        return 1;
    }

    // check that arg is indeed a digit
    if ( is_digitz(argv[1]) == false)
    {
        printf ( "Must provide number as argument!\n" );
        return 1;      
    }  

    // command-line args are by default an array of 
    // chars, so we need to convert to number
    int key = ( atoi(argv[1])); 


    // create an array to store numeric value of capital letters
    char capital[26]; 

    for (int i = 0; i < 26 ; i++) 
    {
        capital[i] = ('A' + i);
    }

    // create an array to store numeric value of lowercase letters
    char lower[26]; 

    for (int i = 0; i < 26; i++) 
    {
        lower[i] = ('a' + i);
    }

    // message to encrypt
    string message = GetString();
    int length = strlen(message);

    // place to store encrypted message
    int encrypt[length]; 

    // check for non alphabetic char's
    // eg. commas, spaces, etc.
    for (int i = 0; i < length ; i++) 
    {
        for ( int j = 0; j < 26; j += 1 ) 
        {
            // keep non-alphabetic char's intact in encrypted message
            if( message[i] != capital[j] && message[i] != lower[j] )
            {
                encrypt[i] = message[i];
            }
        }
    }

    // encrypt message using key
    for (int i = 0; i < length ; i++) 
    {
        for ( int j = 0; j < 26; j += 1 ) 
        {
            if ( my_isupper(message[i], capital[j]) ) 
            {
                encrypt[i] = capital[( (( j + key )%26) ) ];
            }
            else if ( my_islower(message[i], lower[j]) )
            { 
                encrypt[i] = lower[( (( j + key )%26) ) ];
            }
        }
    }

    // print encrypted message
    for ( int i = 0; i < length; i += 1 ) 
    {
        printf("%c", (char)encrypt[i]);
    }
        printf ( "\n" );
        return 0;
       
}
// END main()


// Function Definitions:
bool my_isupper( int n, char c) 
{
    if (n == c)
        return true;
    else
        return false;
}
bool my_islower( int n, char c) 
{
    if(n == c)
        return true;
    else
        return false;
}

// found this on stack_exchange
bool is_digitz(char number[])
{
    int i = 0;

    //checking for negative numbers
    if (number[0] == '-')
        i = 1;
    for (; number[i] != 0; i++)
    {
        //if (number[i] > '9' || number[i] < '0')
        if (!isdigit(number[i]))
            return false;
    }
    return true;
}
