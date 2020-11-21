#include <stdio.h>
//WAP to swap the contents of variables in meomery
//formulat TEMP = C , C = D , D = TEMP;
int main(){
    //declare variables from formula
    int C, D, TEMP;
    
    //user input 
    printf("\n................................");
    printf(" \n swap the contents of variable:-");
    printf("\n................................");
    printf("\n................................");
    printf(" \n enter the value for  C : ");
    scanf("%d", &C);
    printf("\n enter the value for D : ");
    scanf("%d", &D);
    printf("..................................");
    //swap(interchage the contents)
    TEMP = C;
    C = D;
    D = TEMP;
    
    //display the interchaged values
    printf("\nAfter interchage C becomes %d and D becomes %d ",C , D );
}


