#include <groups.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	int group;
	int time;	
	int result;

	if(argc != 3)
	{
		printf("@ Nieprawilowe uzycie!\n");
		return 1;
	}

	time = atoi(argv[1]);
	group = argv[2][0] - 'a';

	printf("@ Zmieniam grupie %c czas na %dms\n", 'a' + group, time);
	result = setgrouptime(time, group);
	printf("@ Wynik zmiany: %d\n", result);

	return 0;
}
