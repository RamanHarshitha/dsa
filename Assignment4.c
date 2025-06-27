#include<stdio.h>
/*int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j%2!=0) printf("1");
            else printf("0");
        }
        printf("\n");
    }
}*/
//4
/*int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==0||i==1||i==3||i==4||j==0||j==1||j==3||j==4){
                printf("1");
            }
            else printf("0");
        }
        printf("\n");
    }
}*/
//Q5
/*int main(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<5;j++){
            printf("%d",(i+j)%2);
        }
        printf("\n");
    }
}*/
//7
/*int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j||j==5-i-1) printf("1");
            else printf("0");
        }
        printf("\n");
    }
}*/
//11
/*int main(){
    for(int i=0;i<5;i++){
        for(int j=1;j<=5;j++){
            printf("%d",i+j);
        }
        printf("\n");
    }
}*/
//14
/*int main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
            printf("%d",j);
            
        }
        for(int j=1;j<i;j++){
            printf("5");
        }
        printf("\n");
    }
}*/
//Q24
/*int main(){
    for(int i=0;i<5;i++){
        for(int j=1;j<=5-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}*/
//21
/*int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i+1;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}*/
//27
/*int main(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<i;j++){
            printf("%d",5-j);
        }
        printf("\n");
    }
}*/
//22
/*int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%d",5-i);
        }
        printf("\n");
    }
}*/
//25
/*int main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}*/
//30
/*int main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}*/
//32
/*int main(){
    int num=0;
    for(int i=5;i>=1;i--){
        for(int j=0;j<5-num;j++){
            
            printf("%d",i+j);
        }
        num++;
        printf("\n");
    }
}*/
//36
/*int main(){
    for(int i=1;i<=5;i++){
        int val=i%2==0 ? 0:1;
        for(int j=1;j<=i;j++){
            printf("%d",val);
            val=1-val;
        }
        printf("\n");
    }
}*/
//38
/*int main(){
    int num=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=1+num;j++){
                printf("%d",j);
        }
        num=num+2;
        printf("\n");
    }
}*/
//40
/*int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=2*i-1;j+=2){
            printf("%d",j);
    }
    for(int j=2*i-3;j>=1;j-=2){
        printf("%d",j);
    }
    printf("\n");
}
}*/
//44
/*int main(){
    int k=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",k);
            k++;
        }
        
        printf("\n");
    }
}*/
//46
/*#include<math.h>
int main(){
    int k=1;
    for(int i=0;i<5;i++){
        for(int j=1;j<=pow(2,i);j++){
            if(k!=10) 
                {printf("%d",k);
                    k++;}
            if(k==10){
                k=1;
            }
            
        }
        
        printf("\n");
    }
}*/
//50
/*int main(){
    int k=1;
    for(int i=1;i<=5;i++){
        int row[i];
        for(int j=0;j<i;j++){
            row[j]=k++;
        }
            if(i%2==0) {
                for(int j=i-1;j>=0;j--){
                    printf("%d",row[j]);
                }
            
            }
            else {
                for(int j=0;j<i;j++){
                    printf("%d ",row[j]);
                }
            }
            printf("\n");
}
        }*/
//star patterens
//1
/*int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                printf("*");
            }
            else printf(" ");
        }printf("\n");
    }
}*/
//2
/*int main(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<5-i;j++){
            printf(" ");

        }
        for(int j=0;j<5;j++){
            printf("*");
        }printf("\n");
    }
}*/
//3
/*int main(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<5-i;j++){
            printf(" ");

        }
        for(int j=0;j<5;j++){
            if(i==1||i==5||j==0||j==4)
                printf("*");
            else printf(" ");
        }printf("\n");
    }
}*/
//7
/*int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i||i==5){
                printf("*");
            }else printf(" ");
        }printf("\n");
    }
}*/
//14
/*int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i+1;j++){
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++){
            printf("*");
        }printf("\n");
    }
}*/
//16
/*int main(){
    int h=4;
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=2*h+1;k>0;k--){
            printf("*");
            
        }h--;
        printf("\n");
    }
} */
//17
/*int main(){
    int h=4;
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=2*h+1;k>0;k--){
            if(i==0||i==4||k==1||k==2*h+1)
            printf("*");
            else printf(" ");
        }h--;
        printf("\n");
    }
}*/
//18
/*int main(){
    for(int i=1;i<=5;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }printf("\n");
    }
    for(int i=4;i>0;i--){
        for(int j=0;j<i;j++){
            printf("*");
        }printf("\n");
    }
}*/
//21
/*int main(){
    int k,h=8;
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            printf("*");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }for(int j=0;j<5-i;j++) printf("*");

        for(int j=0;j<=i-5;j++){
            printf("*");
        }printf("\n");
        }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(k=h;k>0;k--){
            printf(" ");
            
        }h-=2;
        for(int j=1;j<=i;j++) printf("*");

        printf("\n");
    }   
    
}*/
//22
/*int main(){
    int k=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<i+k;j++){
            printf(" ");
        }k++;
        for(int j=5;j>i;j--){
            printf("*");
        }printf("\n");
    }
    for(int i=1;i<=4;i++){
        for(int j=k;j>=0;j--){
            printf(" ");
        }k-=2;
        for(int j=1;j<=i+1;j++){
            printf("*");
        }printf("\n");
    }
}*/
//24
int main(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(i==4||j==4){
                printf("+");
            }
            else printf(" ");
        }printf("\n");
    }
}


