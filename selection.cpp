/*
Selection sort

for i = 1:n,
    k = i
    for j = i+1:n, if a[j] < a[k], k = j
    → invariant: a[k] smallest of a[i..n]
    swap a[i,k]
    → invariant: a[1..i] in final position
end
*/


#include <iostream>

typedef unsigned int UINT;

void selectionSort(int array[], UINT size)
{
    // first iteration to find the lowest value
	for (UINT i = 0; i < size; i++)
	{typedef unsigned int UINT;
void selectionSort(int array[], UINT size)
{
    // first iteration to find the lowest value
  for (UINT i = 0; i < size; i++)
  {
    if (array[0] > array[i])
    {
      int temp = array[0];
      array[0] = array[i];
      array[i] = temp;
    }
  }
  
  for (UINT i = 1; i < size; i++)
  {
    for (UINT j = i+1; j < size; j++)
    {
      if (array[i] > array[j])
      {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}
int main()
{
  int test[11] = {3, 6, 1, 4, 0, 8, 2, 9, 10, 5, 7};
  UINT usize  = sizeof(test) / sizeof(test[0]);
  selectionSort(test, usize);
  
  
  for (UINT i = 0; i < usize; ++i)
  {
    std::cout << test[i] << std::endl;
  }
  
  return 0;
}
SkylaBlue
Commit new file

		if (array[0] > array[i])
		{
			int temp = array[0];
			array[0] = array[i];
			array[i] = temp;
		}
	}
	
	for (UINT i = 1; i < size; i++)
	{
		for (UINT j = i+1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main()
{
	int test[11] = {3, 6, 1, 4, 0, 8, 2, 9, 10, 5, 7};
	UINT usize  = sizeof(test) / sizeof(test[0]);
	selectionSort(test, usize);
	
	
	for (UINT i = 0; i < usize; ++i)
	{
		std::cout << test[i] << std::endl;
	}
	
	return 0;
}
