//#include <stdio.h>
//#define MAX_SIZE 100 // Maximum string size
//
//int main()
//{
//    char str[MAX_SIZE];
//    int len, startIndex, endIndex;
//
//    /* Input string from user */
//    printf("Enter any string: ");
//    gets(str);
//
//
//    /* Find length of the string */
//    len = 0;
//    while(str[len] != '\0') len++;
//
//    startIndex = 0;
//    endIndex   = len-1;
//    
//
//    while(startIndex <= endIndex)
//    {
//        if(str[startIndex] != str[endIndex])
//            break;
//
//        startIndex++;
//        endIndex--;
//    }
//
//    if(startIndex >= endIndex)
//    {
//        printf("String is Palindrome.");
//    }
//    else
//    {
//        printf("String is Not Palindrome.");
//    }
//
//    return 0;
//}
******
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
char * removeBlanks(const char * str);


int main()
{
    char str[MAX_SIZE];
    char * newString;

    printf("Enter any string: ");
    gets(str);

    printf("\nString before removing blanks: \n'%s'", str);

    newString = removeBlanks(str);

    printf("\n\nString after removing blanks: \n'%s'", newString);

    return 0;
}


/**
 * Removes extra blank spaces from the given string
 * and returns a new string with single blank spaces
 */
char * removeBlanks(const char * str)
{
    int i, j;
    char * newString;

    newString = (char *)malloc(MAX_SIZE);

    i = 0;
    j = 0;

    while(str[i] != '\0')
    {
        /* If blank space is found */
        if(str[i] == ' ')
        {
            newString[j] = ' ';
            j++;

            /* Skip all consecutive spaces */
            while(str[i] == ' ')
                i++;
        }

        newString[j] = str[i];

        i++;
        j++;
    }
    // NULL terminate the new string
    newString[j] = '\0';

    return newString;
}
*******
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declarations */
void removeDuplicates(char * str);
void removeAll(char * str, const char toRemove, int index);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("String before removing duplicates: %s\n", str);

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}


/**
 * Remove all duplicate characters from the given string
 */
void removeDuplicates(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        /* Remove all duplicate of character string[i] */
        removeAll(str, str[i], i + 1);
        i++;
    }
}

/**
 * Remove all occurrences of a given character from string.
 */
void removeAll(char * str, const char toRemove, int index)
{
    int i;

    while(str[index] != '\0')
    {
        /* If duplicate character is found */
        if(str[index] == toRemove)
        {
            /* Shift all characters from current position to one place left */
            i = index;
            while(str[i] != '\0')
            {
                str[i] = str[i + 1];
                i++;
            }
        }
        else
        {
            index++;
        }
    }
}
*******
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void removeFirst(char *, const char);


int main()
{
    char str[MAX_SIZE];
    char toRemove;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to remove from string: ");
    toRemove = getchar();

    removeFirst(str, toRemove);

    printf("String after removing first '%c' : %s", toRemove, str);

    return 0;
}


/**
 * Function to remove first occurrence of a character from the string.
 */
void removeFirst(char * str, const char toRemove)
{
    int i = 0;
    int len = strlen(str);

    /* Run loop till the first occurrence of the character is not found */
    while(i<len && str[i]!=toRemove)
        i++;

    /* Shift all characters right to the position found above, to one place left */
    while(i < len)
    {
        str[i] = str[i+1];
        i++;
    }
}
******
* C program to trim trailing white space characters from a string
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void trimTrailing(char * str);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("\nString before trimming trailing white space: \n'%s'", str);

    trimTrailing(str);

    printf("\n\nString after trimming trailing white spaces: \n'%s'", str);

    return 0;
}

/**
 * Remove trailing white space characters from string
 */
void trimTrailing(char * str)
{
    int index, i;

    /* Set default index */
    index = -1;

    /* Find last index of non-white space character */
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            index= i;
        }

        i++;
    }

    /* Mark next character to last non-white space character as NULL */
    str[index + 1] = '\0';
}
********
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Toggle case function declaration */
void toggleCase(char * str);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("String before toggling case: %s", str);

    toggleCase(str);

    printf("String after toggling case: %s", str);

    return 0;
}


/**
 * Toggle case of each character in given string
 */
void toggleCase(char * str) 
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
}
//void toggleCase(char * str)
//{
//    while(*str)
//    {
//        if(*str >= 'a' && *str <= 'z')
//            *str = *str - 32;
//        else if(*str >= 'A' && *str <= 'Z')
//            *str = *str + 32;
//
//        str++;
//    }
//}
********
/**
 * C program to copy one string to another string using pointer
 */
#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the string

int main()
{
    char text1[MAX_SIZE], text2[MAX_SIZE];
    char * str1 = text1;
    char * str2 = text2; 
    
    /* Input string from user */
    printf("Enter any string: ");
    gets(text1);
    
    /* Copy text1 to text2 character by character */
    while(*(str2++) = *(str1++));

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);

    return 0;
}
*******
