#include <stdio.h>
#include <stdlib.h>

int main(void)
{


int i,array[10],input;

// Introducing the flag variable and setting its value to 0, initially
int flag = 0;

for(i=0; i<10; i++)
{
printf("Enter a value: ");
scanf("%d",&array[i]);
}

for(i=0; i<10; i++)
{
printf("\n array_a[%d] = %d ",i,array[i]);

}

printf("\n\nENTER A SEARCH VALUE: ");
scanf("%d",&input);

printf("\n");

// Major changes in this part of the program
for(i=0;i<10;i++){

// If the value exists in the array
if (input == array[i]){
// Print the index and the value
printf("\nArray_a[%d] = %d ",i,array[i]);

// Incrementing the value of flag by 1
flag += 1;
}
}

// After going through the entire array, if no value is found...
if (flag == 0){

// print the "doesn't exist" phrase
printf("\nNo such value exists in the array");

}

printf("\n");
return 0;
}


