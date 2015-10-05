#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	//Check for correct number of arguements 	
	if (argc > 2 || argc == 1)
	{
		printf("Please use the appropriate number of arguements\n");
		return 1;
	}

	printf("Input: %s\n", argv[1]);


	if ((strlen(argv[1]) % 4) != 0 )
	{
		//Not in standard byte, will address
		printf("Not in byte form\n");
		return 1;
	}
	else {
		//For now, just end. Then plan what will happen
		//
		//verify that it's decimal. If it isn't, then return dec value
		

		
		//for ()
		//{

		//}



		printf("%d\n", strlen(str));
		return 0;
	}	
}

