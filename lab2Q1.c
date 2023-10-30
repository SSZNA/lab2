#include <stdio.h>
int main(){   //using for loop
     int n,i,sum = 0;
     printf("Enter the value of n: ");
     scanf("%d",&n);
     printf("using for loop\n");
     for (i=1;i<=n;i++){
        int odd = 2 * i-1;
        printf("%d ",odd);
        sum+=odd;
     }
    printf("\nsum of odd natural numbers:%d\n",sum);
    return 0;

}

#include <stdio.h>
int main(){    //using while-loop
    int n,i=1,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Using while loop\n");
    while (i<=n){
        int odd= 2 * i-1;
        printf("%d ",odd);
        sum+=odd;
        i++;
    }
printf("\nSum of first %d odd natural numbers: %d\n",n,sum);
}

#include <stdio.h>
int main(){     //using do-while loop
    int n,i=1,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Using do-while loop:\n");
    do{
        int odd=2*i-1;
        printf("%d ",odd);
        sum+=odd;
        i++;
    } while (i<=n);
    printf("\nSum of first %d odd natural numbers: %d\n ",n,sum);
    return 0;
}



