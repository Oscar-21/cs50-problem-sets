
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include "cs50.h" 
#include <ctype.h>
/*
 * === FUNCTION ======================================================================
 * Name: main
 * Description:
 * =====================================================================================
 */ 
int main ( int argc, string argv[] ) 
{
    // array of capital letters
    // indexed 0 to 25
    char capital[26];

    for (int i = 0; i < 26 ; i++)
    {
        capital[i] = ('A' + i);
    }

    // array of lowercase letters
    // indexed from 0 to 25
    char lower[26];

    for (int i = 0; i < 26; i++)
    {
        lower[i] = ('a' + i);
    }

    // check to see if 1 and only
    // one command line argument
    // is given.
    if ( argc > 2 || argc == 1 )
    {
        printf ( "Invalid Key!\n" );
        return 1;
    }

    // command line argument will be
    // used as key to encrypt user's
    // message.
    
    string key = argv[1];
    int n = strlen(key);

    // create an array the same size
    // as the alphabetic key string
    // to store the number
    int key_num[n];

    // check to see if commandline
    // argument has non-alphabetic characters
    for ( int i = 0; i < n; i += 1 )
    {
        if ( isalpha(key[i]) == false )
        {
            printf ( "Only alpha!\n" );
            return 1;
        }
    }

    // store message in string p
    string p = GetString();
    int size = strlen(p);

   // Translate each element in
   // the key string to its vignere cipher
   // integer equivalant.

    for ( int i = 0; i < n; i += 1 )
    {
        for ( int j = 0; j < 26; j += 1 )
        {
            if ( key[i] == capital[j] )
            {
                key_num[i] = j;
            }
            else if ( key[i] == lower[j] )
            {
                key_num[i] = j;
            }
        }
    }

    // Create an array that is the same
    // length as the message string
    // to store encrypted message
    int encrypt[size];

    // Our firt loop checks for
    // non alphabetic characters
    // and stores their equivalants
    // in the encrypted array
    for ( int i = 0; i < size; i += 1 )
    {
        if ( isalpha == false )
        {
            encrypt[i] = p[i];
        }
    }

    int count = 0;

    for ( int k = 0; k < size; k++ )
    {
        for (int j = 0; j < 26; j += 1 )
        {
            if ( p[k] == capital[j] )
            {
                encrypt[k] = capital[( (( j + key_num[count])%26) ) ];
                count++;
            }
            else if ( p[k] == lower[j] )
            {
                encrypt[k] = lower[ ( (( j + key_num[count] )%26) )];
                count++;
            }
            else if ( isalpha(p[k]) == false )
            {
                encrypt[k] = p[k];
            }
            if ( count > (n-1) )
            {
                count = 0;
            }
        }
    }

    for ( int i = 0; i < size; i += 1 )
    {
        printf ( "%c", (char)encrypt[i] );
    }
    printf ( "\n" );
    return 0;
}                               /* ---------- end of function main ---------- */
