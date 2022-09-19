#include <stdio.h>

void sort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i] < array[j])
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
    // sortera en array

    int array[] = {5, 3, 2, 1, 4};
    int size = sizeof(array) / sizeof(array[0]);


}