#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void bubbleSort(int* values, int n)
{
    int iteration, num_swaps;
    iteration = 0;
    

    for(int i = 0; i < n - 1; i++)
    {
        num_swaps = 0;

        for(int j = 0; j < n - i - 1; j++)
        {
            if(values[j] > values[j + 1])
            {
                int temp = values[j];
                values[j] = values[j+1];
                values[j+1] = temp;
                num_swaps++;
                
            }
        }

        iteration++;

        printf("Iteration #%d: %d\n", iteration, num_swaps);

    }


}


int main()
{

    int values[] = {97, 16,  45,  63,  13,  22,  7,  58,  72};
    int n = sizeof(values) / sizeof(values[0]);
    

    bubbleSort(values, n);


return 0;

}