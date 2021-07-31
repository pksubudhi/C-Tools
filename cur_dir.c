#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char cwd[PATH_MAX];
   	if (getcwd(cwd, sizeof(cwd)) != NULL) 
	{
       printf("Current working dir: %s\n", cwd);
   	} 
	else 
	{
       perror("getcwd() error");
       return 1;
   	}
   	return 0;
	
}
