
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char returnData[64];
	char args[50][50];
	char *p;
	int a;
	
	fp = popen("/sbin/ifconfig eth0", "r");
	while (fgets(returnData, 64, fp) != NULL)
	{
		
		p=strtok(returnData, " ");
		do
		{
			strcpy(args[a],p);
			a=a+1;
			printf("%s\n",args[7]);	
			p=strtok(NULL," ");
		}
		while(p!=NULL);
	}
pclose(fp);
}
