#include<stdio.h>
#include<math.h>
//1
/*void cube(int n){
    int c=n*n*n;
    printf("cube of number=%d\n",c);

}
int main(){
    int n;
    printf("enter any number to find the cube=");
    scanf("%d",&n);
    cube(n);
}*/
//2
#define PI 3.14
/*void CDia_CIR_AREA(float radius){
    printf("circle diameter=%f\n",2*radius);
    printf("circumference=%f\n",2*PI*radius);
    printf("area=%f\n",PI*radius*radius);

}
int main(){
    float radius;
    printf("enetr the radius of circle=");
    scanf("%f",&radius);
    CDia_CIR_AREA(radius);
}*/
//3
/*void MaxMin(int x,int y){
    if(x>y){printf("maximum is x and minimum is x");
    }
    else{
        printf("y is maximum and x is minimum");
    }
}
int main(){
    int x,y;
    printf("enetr the two numbers");
    scanf("%d%d",&x,&y);
    MaxMin(x,y);
}*/
//4
/*void EvenOdd(int n){
    if(n%2==0) printf("even");
    else printf("odd");
}
int main(){
    int n;
    printf("eneter the number=");
    scanf("%d",&n);
    EvenOdd(n);
}*/
//5
/*void Is_prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("not prime\n");
            return;
        }
    }
    printf("prime\n");
}
void Armstrong(int n){
    int count=0,r,sum=0;
    int temp=n;
    int result=n;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    while(n>0){
        r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
    }
    if(sum==result) printf("armstrong\n");
}
void Perfect(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n) printf("perfect number\n");
}
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    Is_prime(n);
    Armstrong(n);
    Perfect(n);

}*/
//6
/*void Is_prime_interval(int n){
    int i,j;
    for(i=1;i<=n;i++){
        int c=0;
        for(j=2;j<i;j++){
        if(i%j==0){
            c++;
        }
    }
    if(c==0 && i>1) printf("%d\t",i);
}
}
int main(){
    int n;
    printf("enetre the number upto=");
    scanf("%d",&n);
    Is_prime_interval(n);
}*/
//7
/*void Is_strong_interval(int n){
    int i,r,j;
    for(i=1;i<=n;i++){
        int sum=0;
        int temp=i;
    while(temp>0){
        r=temp%10;
        int f=1;
        for(j=1;j<=r;j++){
            f=f*j;
        }
        sum=sum+f;
        temp=temp/10;
    }
    if(i==sum) printf("%d\t",i);
    }
}
int main(){
    int n;
    printf("enetre the number upto=");
    scanf("%d",&n);
    Is_strong_interval(n);
}*/
//8
/*void Is_Arm_interval(int n){
    int i,temp,r;
    for(i=1;i<=n;i++){
        int temp=i;
        int temp1=i;
        int sum=0,count=0;
        while(temp1>0){
            temp1=temp1/10;
            count++;
        }
        temp1=temp;
        while(temp1>0){
            r=temp1%10;
            sum=sum+pow(r,count);
            temp1=temp1/10;
    }
    if(sum==i) printf("%d\t",i);
}    
}
int main(){
    int n;
    printf("enetre the number upto=");
    scanf("%d",&n);
    Is_Arm_interval(n);
}*/
//9
/*void Is_Perfect_interval(int n){
    int i,j;
    for(i=1;i<=n;i++){
        int sum=0;
        for(j=1;j<i;j++){
        if(i%j==0){
            sum=sum+j;
        }
    }
    if(sum==i) printf("%d\t",i);
    }
}
int main(){
    int n;
    printf("enetre the number upto=");
    scanf("%d",&n);
    Is_Perfect_interval(n);
}*/
//10
/*int result=1;
int Power(int base,int power){
    if(power>0){
        result*=base;
        power--;
        Power(base,power);
    }return result;
}
int main(){
    int base,power;
    printf("enter the base value and power=");
    scanf("%d%d",&base,&power);
    result=Power(base,power);
    printf("%d",result);
}*/
//11
/*int i=1;
void Natural_n(int n){
    printf("%d",i);
    i++;
    if(i<=n) Natural_n(n);
}
int main(){
    int n;
    printf("eneter n value=");
    scanf("%d",&n);
    Natural_n(n);
}*/
//12
/*void EvenOdd_n(int i,int n){
    if(i<=n){
        if(i%2==0){  //if i%2!=0 then odd
        printf("%d",i);
        }
     EvenOdd_n(i+1,n);}
}
int main(){
    int n;
    printf("eneter n value=");
    scanf("%d",&n);
    EvenOdd_n(0,n);
}*/
//13
/*int i=1,sum=0;
int Natural_n(int n){
    sum+=i;
    i++;
    if(i<=n) Natural_n(n);
    return sum;
}
int main(){
    int n;
    printf("eneter n value=");
    scanf("%d",&n);
    sum=Natural_n(n);
    printf("%d",sum);
}*/
//14
/*int sum=0;
int EvenOdd_n(int i,int n){
    if(i<=n){
        if(i%2==0){  //if i%2!=0 then odd
        sum+=i;
        }
     EvenOdd_n(i+1,n);}
     return sum;
}
int main(){
    int n;
    printf("eneter n value=");
    scanf("%d",&n);
    sum=EvenOdd_n(0,n);
    printf("%d",sum);
}*/
//15
/*void Reverse(int n){
    int r=n%10;
    printf("%d",r);
    n=n/10;
    if(n>0) Reverse(n);
}
int main(){
    int n;
    printf("enter n value=");
    scanf("%d",&n);
    Reverse(n);
}*/
//16
/*int Palin(int reverse,int n){
    int r=n%10;
    reverse=reverse*10+r;
    n=n/10;
    if(n>0) return Palin(reverse,n);
    return reverse;
}
int main(){
    int n,reverse=0,r;
    printf("enter n value=");
    scanf("%d",&n);
    r=Palin(0,n);
    if(r==n) printf("palindrome");
}*/
//17
/*int sum=0;
int SumOfDigits(int n){
    int r=n%10;
    sum+=r;
    n=n/10;
    if(n>0) SumOfDigits(n);
    return sum;
}
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int h=SumOfDigits(n);
    printf("%d",h);
}*/
//18
/*int Factorial(int n){
    if(n==0||n==1) return n;
    return n*Factorial(n-1);
}
int main(){
    int n;
    printf("eneter n value=");
    scanf("%d",&n);
    int fact=Factorial(n);
    printf("factorial=%d\n",fact);
}*/
//19
/*int Fibinocci(int n){
    if(n==1||n==2) return n-1;
    return Fibinocci(n-1)+Fibinocci(n-2);
}
int main(){
    int n;
    printf("enter the n value=");
    scanf("%d",&n);
    int result=Fibinocci(n);
    printf("%d",result);
}*/
//20
/*int Hcf(int a,int b){
    if(b==0) return a;
    else return Hcf(b,a%b);

}
int main(){
    int a,b;
    printf("enter the a and b");
    scanf("%d%d",&a,&b);
    int result=Hcf(a,b);
    printf("%d",result);
}*/
//21
/*int Lcm(int max,int a,int b){
    if(max%a==0&&max%b==0) return max;
    else return Lcm(max+1,a,b);
}
int main(){
    int a,b,max;
    printf("enter a and b value=");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    int result=Lcm(max,a,b);
    printf("%d",result);
}*/
//22
/*int displayArray(int i,int n,int arr[]){
    if(i<n) {
        printf("%d",arr[i]);
    return displayArray(i+1,n,arr);}
}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    displayArray(0,n,arr);
}*/
//23
/*int sum=0;
int displayArray(int i,int n,int arr[]){
    
    if(i<n) {
        sum+=arr[i];
    return displayArray(i+1,n,arr);}
    return sum;
}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int result=displayArray(0,n,arr);
    printf("%d",result);
}*/
//24
int displayArray(int i,int *max,int *min,int n,int arr[]){
    
    if(i<n) {
        if(arr[i]>*max) {*max=arr[i];}
        if(arr[i]<*min) *min=arr[i];
    displayArray(i+1,max,min,n,arr);}
}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int max=arr[0];
    int min=arr[0];
    displayArray(0,&max,&min,n,arr);
    printf("max=%d\n",max);
    printf("min=%d",min);
}