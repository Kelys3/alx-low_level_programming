#include <unistd.h>
#include <string.h>

int rand()
{
	static int count = -1;

	count++;
	if (count == 0)
		return 8;
	if (count == 1)
		return 8;
	if (count == 2)
		return 7;
	if (count == 3)
		return 9;
	if (count == 4)
		return 23;
	if (count == 5)
		return 74;
	return count * count % 30000;
}
