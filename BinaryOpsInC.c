#include <stdio.h>
#include <stdlib.h>
#include "BinaryOpsInC.h"

void displayBinary(int input);
int complement(int num);
void displayOptions();

int main()
{   unsigned int value;
    int option;
    printf("Input a number -->  ");
    scanf("%d", &value);

    do
    {
        displayOptions();
        scanf("%d", &option);   //get option

 
     switchLabel:
        switch(option)
         {
            case 1:PRINT(value);
                break;
           case 2:SLC(value);
                break;
            case 3: SRC(value);
                break;
            case 4: COMPLEMENT(value);
                break;
            case 5:
                break;
            default:                             
                 {
                  printf("Invalid option. Please, enter a number between 1 and 5 -->  ");
                  scanf("%d",&option);  
                  while(option > 5 || option < 1)
                  {
                  printf("Invalid option. Please, enter a number between 1 and 5 -->  ");
                  scanf("%d",&option);
                  }     
                        goto switchLabel;                       
                  }
        }
    }while( option != 5);
    printf("You have successfully exited from program\n");
    return 0;
}
void displayOptions()
{
                DISPLAY(input);
        printf("\t 2 - Shift left circular one digit \n");
        printf("\t 3 - Shift right circular one digit \n");
        printf("\t 4 - 1's Complement \n");
        printf("\t 5 - Exit \n");
                printf("Enter your option here -->  ");
}
void displayBinary(int num)
{
    int temp, binary[31];
    for (int i = 31; i >= 0; i--)
    {
        temp = num >> i;
        if (temp & 1)
        {
            binary[i] = 1;
            printf("1");
        }
        else
        {
            binary[i] = 0;
            printf("0");
        }
    }
    printf("\n");
}

int complement(int num)
{
    num = ~num;
    return num;
}
