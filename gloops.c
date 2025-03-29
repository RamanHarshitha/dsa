#include<stdio.h>
/*while loop*/
/*int main(void){
    int ans=0;
    int num,val;
    char op;
    while(1){
        printf("enter the number:\n");
        scanf("%d",&num);
        printf("enter the operation:\n");
        scanf(" %c",&op);
        if(op=='+'){
            ans +=num;
        }
        else if(op=='-'){
            ans=ans-num;
        }
        else if(op=='*'){
            ans=ans*num;
        }
        else if(op=='/'){
            ans=ans/num;
        }
        printf(" 1 for continue and 0 for exit\n");
        scanf("%d",&val);
        if(val==0){
        break;
        }

        }
        printf("%d",ans);
    }
*/

/*for loop*/
/*int array[5];
int main(){
    int ans=0;
    int i;
    for(i=0;i<5;i++){
        printf("enter the array element");
        scanf("%d",&array[i]);
    }
    //adding the array elements
    i=0;
    while(i<5){
        ans=ans+array[i];
        i+=1;
    }
    printf("%d",ans);
}
*/
//pattrens
/*int main(){
int i,j;
for(i=0;i<5;i++){
    for(j=0;j<5-i;j++){
        printf("%d",j+1);

    }
    printf("\n");
}
}*/
/*int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }

}*/
//do-while
/*#include<string.h>
int main(){
    char color[32];
    do{
        printf("enter the color:");
        scanf("%s",color);

    }while(strcmp(color,"red")!=0);  //if color is red then stop the loop
}

*/