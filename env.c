#include<stdio.h>
#include<conio.h>

/*
This program displays all the Environmental variable in the current system with their
corresponding values

Prepared by P K Sybudhi (mailtopksubudhi@gmail.com, WhatsApp: +91-8895174939)
*/

int main(int argc, char *argv[], char *envp[])
{
	int i=0;
	for(;envp[i]!=NULL;i++)
	{
		printf("Environmental variable %s\n",envp[i]);
	}
	
}
