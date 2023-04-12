#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings for Visual Studio compiler
#include<stdio.h>
#include<ctype.h>
#include<string.h>

//initialize the function prototype that takes in the word and returns an int value
int checkVowels(char word[]);
int main()
{

	//declare a char array and an int variable
	char word[25];
	int vowelCounter;

	//ask user for a word and store it in a string
	printf("Print a word ");
	scanf(" %s", word);

	//call the function to print the total amt of vowels in the word
	vowelCounter = checkVowels(word);

	//print the total number of vowels
	printf("\nThere are %d vowels in your word", vowelCounter);

	return 0;
}

//you can use the tolower function and loop the string so you can shorten the if statements boolean expression
//declare function definition
int checkVowels(char word[])
{
	//initialize the for loop with an iterator and the length of the string
	int i, len = strlen(word);
	//declare a total variable and count variables for each vowel
	int total = 0, aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
	//initialize the for loop here
	for (i = 0; i < len; i++)
	{
		//if there is an vowel in the word index then you will increment total and the count by one
		//make sure you use the i int to make sure you are getting the index at word and then printing what's in the index at word. since it loops it will tell you each time if there is a vowel there.
		if (word[i] == 'a' || word[i] == 'A')
		{
			total++;
			aCount++;
			printf("There is an 'a' located at index %d\n", i);
		}

		if (word[i] == 'e' || word[i] == 'E')
		{
			total++;
			eCount++;
			printf("There is an 'e' located at index %d\n", i);
		}
		if (word[i] == 'i' || word[i] == 'I')
		{
			total++;
			iCount++;
			printf("There is an 'i' located at index %d\n", i);
		}
		if (word[i] == 'o' || word[i] == 'O')
		{
			total++;
			oCount++;
			printf("There is an 'o' located at index %d\n", i);
		}
		if (word[i] == 'u' || word[i] == 'U')
		{
			total++;
			uCount++;
			printf("There is a 'u' located at index %d\n", i);
		}
		
	}
	//return the total outside of the for loop
return total;
}