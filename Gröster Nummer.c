#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    int B;
    int C;
    printf("treten sie mal drei Verschidene Nummer ein :\t");
    scanf("%d %d %d",&A,&B,&C);
    if(A >= B && A >= C){
        printf("The bigest Number is : %d",A);
    }else if(B >= C && B >= A){
        printf("The bigest Number is : %d",B);
    }else{
        printf("The bigest Number is : %d",C);
    }
    return 0;
}
