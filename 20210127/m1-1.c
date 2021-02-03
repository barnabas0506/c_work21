#include <stdio.h>

void main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	int i;

	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		*ptr += 2;
		ptr++;
        printf("%d\n ", ptr);
		printf("%d\n ", arr[i]);
	}
}