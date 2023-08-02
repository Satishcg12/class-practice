// bubble short

#include <stdio.h>

int main()
{
    int size, i, j;
    printf("Enter the number of elements: "); // asking user for input
    scanf("%d", &size);
    int numbers[size];
    printf("Enter the array elements: ");
    for (i = 0; i < size; ++i)
    {
        scanf("%d", &numbers[i]);
    }
    printf("\nBefore bubblesort\n");
    for (i = 0; i < size; ++i)
    {
        printf("%d, ", numbers[i]);
    }
    
    
    for( i=0 ;i<size;i++){
    	printf("\nIteration: %d\n ", i+1);
	    for (j = 0; j < size; ++j)
	    {
	        printf("%d, ", numbers[j]);
	    }
	    printf("\n ");
    
	    for( j=0 ;j<size-i-1;j++){
	    	printf("\n comparing: %d, %d ",numbers[j],numbers[j+1]);
	    	if (numbers[j]>numbers[j+1]){
	    		int temp = numbers[j];
	    		numbers[j] = numbers[j+1];
	    		numbers[j+1] = temp;
	    	}
		}	
	}
	
    printf("\nAfter bubblesort\n");
    for (i = 0; i < size; ++i)
    {
        printf("%d, ", numbers[i]);
    }
    
}
