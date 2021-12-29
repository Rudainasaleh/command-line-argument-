/* 
Describtion: write a program that a word is a comman line argument and its 
            valid if all the characters of that word are alphabetic letters,
            and the letters either all capitals or all not capitals.
*/ 


#include <stdio.h>


/* 
int validate(char *word)
The word refer to point to a string that has the word that be validated.

Return 1 if  word is valid
Otherwise, returne 0
*/
int validate(char *word)
{
    // keeps count of each char type
    int upper=0,lower=0;
    char *ch=word;
    while(*ch!='\0')
    {
        if (*ch >= 'A' && *ch <= 'Z') // if ch is upper case
            {
                upper=1;
            } 
        else if(*ch >= 'a' && *ch <= 'z') // if ch is lower case
        {
           lower=1;
        }
        else 
            {
                return 0;
            }
        ch++;
    }
    if(upper==0 || lower==0 )
    {
        return 1;
    }
    else{
        return 0;
    }


}

/*
int main(int argc, char *argv[])
The main function of the program.
print "Incorrect number of arguments. Usage: ./a.out word" if its incorrect tnumber.
print either Valid or invalid if all the characters of that word are alphabetic letters
 */

int main( int argc, char *argv[] )  
{

    
   if( argc != 2 ) { // checking if argc isnt 2 then the number of arguments isnt correct
      printf(" Incorrect number of arguments. Usage: ./a.out word\n");
   }
   else{ 
       int validation=validate(argv[1]); 
       if(validation==1) // if validation = 1, print valid
       {
           printf("valid\n");


       }
       else{ // else, print invalid
           printf("invalid\n");
       }
   }
   return 0;
}
