#include "search_algos.h"

/**
 * binary_search - searches for value with bin search
 * @array: pointer to first element to be searched
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: everywhere value is found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int lft = 0, rgt = 0, hlf = 0, indx = 0;

	if (array == NULL)
		return (-1);

	rgt = size - 1;

	while (lft <= rgt)
	{
		printf("searching in array: ");
		for (indx = lft; indx <= rgt; indx++)
		{
			if (indx == rgt)
			{
				printf("%d", array[indx]);
				break;
			}
			printf("%d, ", array[indx]);
		}
		printf("\n");

		hlf = (lft + rgt) / 2;

		if (array[hlf] == value)
			return (hlf);

		else if (array[hlf] > value)
			rgt = hlf - 1;

		else if (array[hlf] < value)
			lft = hlf + 1;
	}
	return (-1);
}
