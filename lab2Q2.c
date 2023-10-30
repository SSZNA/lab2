
void main(){
int mynum;
printf("Type a number: ");
scanf("%d",&mynum);
int spaces=mynum-1;
for (int i = 1; i<= mynum;i++){
    for (int k = spaces; k>0 ; k--){
        printf(" ");
        }
    for (int j = 1; j <= i;j++){
        printf("* ");
            }
printf("\n");
spaces--;
        }
    }


