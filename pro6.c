#include<stdio.h>
int main(void){

int i, array[10], input;

for (i=0;i<10;i++){
printf("\n ENTER A VALUE: ");
scanf("%d", &array[i]);
}

for(i=0; i<10;i++)
{
printf("\n array[%d] = %d ", i,array[i]);
}

printf("\n Enter A SEARCH VALUE: ");
scanf("%d", &input);

for(i=0;i<10;i++){
if(input!= array[i]){
printf("That value does not exist in the array!\n");
}

for (i=0;i<10;i++){
if(input== array[i]){
printf("\n array[%d] = %d ", i, array[i]);

        }
       }
      }

return 0;
}
