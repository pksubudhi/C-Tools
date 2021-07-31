#include<stdio.h>

int main(int argc, char *argv[])
{
	char* str;
	
	if(argc!=2)
	{
		printf("Invalid Number of argument ");
		return 0;
	}
	str = (char *)getenv(argv[1]);
	if(str==NULL)
	{
		printf("Environmental variable not found");
		return 0;
	}
	else
	{
	
		printf("Environmental variable %s contains : %s",argv[1],str);
	}	
	return 0;
}
