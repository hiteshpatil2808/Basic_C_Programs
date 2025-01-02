#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>

int main(int argc, char *argv[])
{
    if(argc<2)
      {
        printf("enter file name as command line argument\n");
        return 1;
      }
       int i;
       for(i=1;i<argc;i++)
	{
		struct stat fileStat;
		if(stat(argv[i],&fileStat)<0)
		{
		  printf("failed to get incode number for file:%s\n",argv[i]);
		  continue;
                }
		printf("file:%s,Incode Number:%d\n",argv[i],fileStat.st_ino);
        }
         return 0;
}

