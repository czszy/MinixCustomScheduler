#include <lib.h>

#define GROUP_A 0
#define GROUP_B 1
#define GROUP_C 2

int setgroup(pid_t pid, int group)
{
	message m;
	m.m1_i1 = pid;
	m.m1_i2 = group;
	return _syscall(MM, SETGROUP, &m);
}

int setgrouptime(int time, int group)
{
	message m;
	m.m1_i1 = time;
	m.m1_i2 = group;
	return _syscall(MM, SETGROUPTIME, &m);
}
