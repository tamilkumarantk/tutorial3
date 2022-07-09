#include <stdio.h>       //header file i used here for scanf() and printf() function usage
#include <string.h>      //header file i used here for storing text/characters
 
char s[50], sub[50];     
int count = 0, count1 = 0;
 
void main()
{
    int i,j,l,k;        ///i and j used for looping statement,l and k used for calculate the length of given inputs from 
 
    printf("\nEnter a string : ");    //it gives message to the complier to print given input before scanf function
    scanf("%[^\n]s", s);              //[^\n] before s used to collect the even the input has space between characters
 
    l = strlen(s);                    //strlen function used to find the length of the input characters
 
    printf("\nEnter a substring : "); 
    scanf(" %[^\n]s", sub);
 
    k = strlen(sub);  
 
    for (i = 0; i < l;)                //assigning i=0 and loop travels for l times
    {
        j = 0;                        
        count = 0;
        while ((s[i] == sub[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == k)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    printf("%s occurs %d times in %s", sub, count1, s);           //this prints a substring which appear how many times in a string
}




/*report:-
        From this program we are learnt that how to get collection of string which appears on the main string
*/



