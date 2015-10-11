#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int i;
	int userInput; // To be retrieved from command line
	//Check for correct number of arguements 
	
	printf("Please enter a single binary number:\n");
	scanf("%d",&userInput);


	//for each char in string, make sure is binary number
	for(i = 0; i < userInput; i++ )
	{
		printf("%d\n", i);
	}

	printf("You entered: %d\n",userInput);
	
}

