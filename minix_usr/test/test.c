#include <groups.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	int group;
	int pid;	
	int result;
	int i, j;

	if(argc != 2)
	{
		printf("@ Nieprawilowe uzycie!\n");
		return 1;
	}

	group = argv[1][0] - 'a';
	pid = getpid();

	printf("@ Zmieniam sobie %d grupe na %c\n", pid, 'a' + group);
	result = setgroup(pid, group);
	printf("@ Wynik zmiany: %d\n", result);
	
	while(1)
	{
		for(j = 0; j < 1024 * 64 * 256; j++)
		{
			/* hard working.. */
		}

		/*printf("@ Petla %d z grupy %c konczy obrot: %d\n", pid, 'a'+group, i+1);*/
	}

	printf("@ Koniec %d\n", pid);

	return 0;
}
