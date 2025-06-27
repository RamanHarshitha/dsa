#include<stdio.h>
//Q1
/*int main(){
    int i,n;
    printf("eneter the n value=");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        printf("%d",i);
        i++;
    }
}*/
//Q2
/*int main(){
    int i,n;
    printf("eneter the n value=");
    scanf("%d",&n);
    i=1;
    while(n>=i){
        printf("%d ",n);
        n--;
    }
}*/
//Q3
/*int main(){
    char i='a';
    while(i<='z'){
        printf("%c ",i);
        i++;
    }
}*/
//Q4
/*int main(){
    int i=1;
    while(i<=100){
        if(i%2==0){
            printf("%d ",i);
        }
        i++;
    }
}*/
//Q5
/*int main(){
    int i=1;
    while(i<=100){
        if(i%2!=0){
            printf("%d ",i);
        }
        i++;
    }
}*/
//Q6
/*int main(){
    int i=1,n,sum=0;
    printf("eneter n value=");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i++;
    }
    printf("sum=%d\n",sum);
}*/
//Q7
/*int main(){
    int i=1,n,sum=0;
    printf("eneter n value=");
    scanf("%d",&n);
    while(i<=n){
        if(i%2!=0){
            sum=sum+i;
        }
        i++;
    }
    printf("sum=%d\n",sum);
}*/
//Q8
/*int main(){
    int i=1,n;
    printf("eneter the number=");
    scanf("%d",&n);
    while(i<=10){
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
}*/
//Q9
/*int main(){
    int i,n,sum=0;
    printf("eneter the n value=");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("sum of n naturals=%d",sum);
}*/
//Q10
/*int main(){
    int number;
    printf("eneter the number=");
    scanf("%d",&number);
    printf("last digit=%d\n",number%10);
    while(number>=10){
        number=number/10;
    }
    printf("first digit=%d\n",number);
}*/
//Q11
/*int main(){
    int num,count=0;
    printf("eneter the number=");
    scanf("%d",&num);
    while(num>0){
        num=num/10;
        count++;
    }
    printf("no of digits=%d",count);
}*/
//Q12
/*int main(){
    int num,count=0,sum=0,r;
    printf("eneter the number=");
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        num=num/10;
        sum=sum+r;
    }
    printf("no of digits=%d",sum);
}*/
//Q13
/*int main(){
    int num,count=0,p=1,r;
    printf("eneter the number=");
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        num=num/10;
        p=p*r;
    }
    printf("no of digits=%d",p);
}*/
//Q14
#include<math.h>
/*int main(){
    int first,last,middle,num,ori,count=0,digits;
    printf("eneter the number");
    scanf("%d",&num);
    ori=num;
    last=num%10;
    while(num>=10){
        num=num/10;
        count++;
    }
    first=num;
    digits=count+1;
    middle=(ori%(int)pow(10,digits-1))/10;
    int swapped=last*(int)pow(10,digits-1)+middle*10+first;
    printf("swapped number=%d\n",swapped);

}*/
//Q15
/*int main(){
    int number;
    printf("eneter the number=");
    scanf("%d",&number);
    int last=number%10;
    while(number>=10){
        number=number/10;
    }
    printf("sum==%d\n",number+last);
}*/
//Q16,q17
/*int main(){
    int n,reverse=0,r;
    printf("enter the num=");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    printf("reverse of string=%d",reverse);
    if(temp==reverse) printf("palindrome");
}*/
//Q18
/*int main(){
    int num,r,i;
    printf("eneter the number:");
    scanf("%d",&num);
    for(i=0;i<10;i++){
        int temp=num;
        int c=0;
        while(temp>0){
            r=temp%10;
            temp=temp/10;
            if(i==r) c++;

        }
        if(c>0) printf("no of %d is=%d\n",i,c);
    }
}*/
//Q19
#include<string.h>
/*int main(){
    int num,i;
    char *arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    printf("enter the number");
    scanf("%d",&num);
    char str[20];
    sprintf(str,"%d",num);
    for(i=0;i<strlen(str);i++){
        int a=str[i]-'0';
        printf("%s",arr[a]);

    }
}*/
//Q20
/*int main(){
    int i;
    printf("ascc values:");
    for(i=32;i<=126;i++){
        printf("%d:%c\t",i,i);
    }
}*/
//Q21
/*int main(){
    int base,exp,i;
    printf("eneter base and exponent value:");
    scanf("%d%d",&base,&exp);
    int p=base;
    for(i=1;i<exp;i++){
        p=p*base;
    }
    printf("%d",p);
}*/
//Q22
/*int main(){
    int num,i;
    printf("enter a number=");
    scanf("%d",&num);
    printf("factors=");
    for(i=1;i<=num;i++){
        if(num%i==0){
            printf("%d\t",i);
        }
    }
}*/
//Q23
/*int main(){
    int num,i,fac=1;
    printf("enter the num=");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fac=fac*i;
    }
    printf("factorial=%d",fac);
}*/
//Q24
/*int main(){
    int a,b;
    printf("eneter two numbers=");
    scanf("%d%d",&a,&b);
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    printf("hcf=%d ",a);
}*/
//Q25
/*int main(){
    int a,b,max;
    printf("eneter the two number=");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    while(1){
        if(max%a==0 && max%b==0){
            printf("lcm=%d",max);
            break;
        }
        max++;
    }
}*/
//Q26
/*int main(){
    int num,i;
    printf("eneter the num=");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("not prime");
            return 0;
        }
    }
    printf("prime");
}*/
//Q27
/*int main(){
    int num,count=0,r,sum=0;
    printf("enter the num=");
    scanf("%d",&num);
    int temp=num;
    int result=num;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    while(num>0){
        r=num%10;
        sum=sum+pow(r,count);
        num=num/10;
    }
    if(sum==result) printf("armstrong");
}*/
//Q28
/*int main(){
    int num,i,sum=0;
    printf("enter the number=");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num) printf("perfect number");
}*/
//Q29
/*int main(){
    int num,i,sum=0,r;
    printf("enter the number");
    scanf("%d",&num);
    int temp=num;
    while(num>0){
        r=num%10;
        int f=1;
        for(i=1;i<=r;i++){
            f=f*i;
        }
        sum=sum+f;
        num=num/10;
    }
    if(temp==sum) printf("strong number");
}*/
//Q30
/*int main(){
    int n,i,j;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int c=0;
        for(j=2;j<i;j++){
        if(i%j==0){
            c++;
        }
    }
    if(c==0 && i>1) printf("%d\t",i);
}
}*/
//Q31
/*int main(){
    int n,i,temp,r;
    printf("enter the n value:");
    scanf("%d",&n);
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
}*/
//q32
/*int main(){
    int n,i,j;
    printf("eneter n value=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int sum=0;
        for(j=1;j<i;j++){
        if(i%j==0){
            sum=sum+j;
        }
    }
    if(sum==i) printf("%d\t",i);
    }
}*/
//q33
/*int main(){
    int n,i,r,j;
    printf("eneter n value=");
    scanf("%d",&n);
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
}*/
//Q34
/*int main(){
    int n;
    printf("enter num");
    scanf("%d",&n);
    while(n%2==0){
        printf("2 ");
        n=n/2;
    }
    for(int i=3;i*i<=n;i+=2){
        while(n%i==0){
            printf("%d ",i);
            n/=i;
        }
    }
    if(n>2) printf("%d",n);
}*/
//Q35
/*int main(){
    int n,i,j,s=0;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int c=0;
        for(j=2;j<i;j++){
        if(i%j==0){
            c++;
        }
    }
    if(c==0 && i>1) {
        s=s+i;
}
}
printf("%d\t",s);
}*/
//Q36
/*int main(){
    int n,i;
    printf("enter n value=");
    scanf("%d",&n);
    int f1=0,f2=1;
    for(i=1;i<=n;i++){
        
        int f3=f1+f2;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
    }
}*/
//Q37
/*int main(){
    int n;
    char str[20];
    printf("enter the binary num=");
    scanf("%d",&n);
    sprintf(str,"%d",n);
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='0') str[i]='1';
        else str[i]='0';
    }
    printf("%s",str);
}*/
//Q38
/*int main(){
    char str[20];
    int f;
    printf("enter the value=");
    scanf("%s",str);
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]=='1'){
            f=i+1;
            break;

        }
    }
    for(int i=0;i<=strlen(str)-f;i++){
        if(str[i]=='0') str[i]='1';
        else str[i]='0';
    }
    printf("%s",str);
}*/
//Q39
/*int main(){
    int binary,decimal=0,k=0;
    printf("eneter the binary number=");
    scanf("%d",&binary);
    while(binary!=0){
        int digit=binary%10;
        decimal+=digit*pow(2,k);
        binary/=10;
        k++;

    }
    //decimal to octal
    int octal[100],i=0;
    while(decimal!=0){
        octal[i]=decimal%8;
        decimal/=8;
        i++;
    }printf("octal:");
    for(int j=i-1;j>=0;j--){
        printf("%d",octal[j]);

    }
}*/
//40
/*int main(){
    int binary,decimal=0,k=0;
    printf("eneter the binary number=");
    scanf("%d",&binary);
    while(binary!=0){
        int digit=binary%10;
        decimal+=digit*pow(2,k);
        binary/=10;
        k++;

    }printf("decimal=%d\n",decimal);
}*/
//41
/*int main(){
    int binary,decimal=0,k=0;
    printf("eneter the binary number=");
    scanf("%d",&binary);
    while(binary!=0){
        int digit=binary%10;
        decimal+=digit*pow(2,k);
        binary/=10;
        k++;

    }
    //decimal to hexa
    char hexa[100],i=0;
    while(decimal!=0){
        int remainder=decimal%16;
        if(remainder<10) hexa[i]=remainder+'0';
        else hexa[i]=remainder-10+'A';
        decimal/=16;
        i++;
    }printf("hexa decimal:");
    for(int j=i-1;j>=0;j--){
        printf("%c",hexa[j]);

    }
}*/
//42:octal to binary
//octal to decimal//decimal to binary
/*int main(){
    int octal,decimal=0,k=0;
    printf("eneter the octal number=");
    scanf("%d",&octal);
    while(octal!=0){
        int digit=octal%10;
        decimal+=digit*pow(8,k);
        octal/=10;
        k++;

    }
    //decimal to binary
    int binary[100],i=0;
    while(decimal!=0){
        binary[i]=decimal%2;
        decimal/=2;
        i++;
    }printf("binary:");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);

    }
}*/
//43:octal to decimal
/*int main(){
    int octal,decimal=0,k=0;
    printf("eneter the octal number=");
    scanf("%d",&octal);
    while(octal!=0){
        int digit=octal%10;
        decimal+=digit*pow(8,k);
        octal/=10;
        k++;

    }printf("octal to decimal=%d\n",decimal);

}*/
//44:octal to hexa
/*int main(){
    //octal to decimal
    int octal,decimal=0,k=0;
    printf("eneter the octal number=");
    scanf("%d",&octal);
    while(octal!=0){
        int digit=octal%10;
        decimal+=digit*pow(8,k);
        octal/=10;
        k++;
    } //decimal to hexa
    char hexa[100],i=0;
    while(decimal!=0){
        int remainder=decimal%16;
        if(remainder<10) hexa[i]=remainder+'0';
        else hexa[i]=remainder-10+'A';
        decimal/=16;
        i++;
    }printf("hexa decimal:");
    for(int j=i-1;j>=0;j--){
        printf("%c",hexa[j]);

    }
}*/
//45:decimal to binary
/*int main(){
    int decimal;
    printf("enter decimal number=");
    scanf("%d",&decimal);
    int binary[100],i=0;
    while(decimal!=0){
        binary[i]=decimal%2;
        decimal/=2;
        i++;
    }printf("binary:");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);

    }
}*/
//46
/*int main(){
    int decimal;
    printf("enter decimal number=");
    scanf("%d",&decimal);
    int octal[100],i=0;
    while(decimal!=0){
        octal[i]=decimal%8;
        decimal/=8;
        i++;
    }printf("octal:");
    for(int j=i-1;j>=0;j--){
        printf("%d",octal[j]);

    }
}*/
//47
/*int main(){
    int decimal;
    printf("enter decimal number=");
    scanf("%d",&decimal);
    int hexa[100],i=0;
    while(decimal!=0){
        int r=decimal%16;
        if(r<10) hexa[i]=r+'0';
        else hexa[i]=r-10+'A';
        decimal/=16;
        i++;
    }printf("hexa:");
    for(int j=i-1;j>=0;j--){
        printf("%c",hexa[j]);

    }
}*/
//48:hexa to binary
#include<ctype.h>
/*int main(){
    //hexa to deci
    char hexa[20];
    int decimal=0,k=0;
    printf("eneter the hexa number=");
    scanf("%s",hexa);\
    int len=strlen(hexa);
    int j=0;
    for(k=len-1;k>=0;k--){
        char ch=toupper(hexa[k]);
        if(ch>='0'&&ch<='9') decimal+=(ch-'0')*pow(16,j);
        else if(ch>='A'&&ch<='F') decimal+=(ch-'A'+10)*pow(16,j);
        j++;
    }
    printf("%d",decimal);
    //deci to binary
    int binary[100],i=0;
    while(decimal!=0){
        binary[i]=decimal%2;
        decimal/=2;
        i++;
    }printf("binary:");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);

    }
}*/
//49:hexa to octal:hexa to deci-octal
/*int main(){
    //hexa to deci
    char hexa[20];
    int decimal=0,k=0;
    printf("eneter the hexa number=");
    scanf("%s",hexa);\
    int len=strlen(hexa);
    int j=0;
    for(k=len-1;k>=0;k--){
        char ch=toupper(hexa[k]);
        if(ch>='0'&&ch<='9') decimal+=(ch-'0')*pow(16,j);
        else if(ch>='A'&&ch<='F') decimal+=(ch-'A'+10)*pow(16,j);
        j++;
    }
    //deci to octal
    int octal[100],i=0;
    while(decimal!=0){
        octal[i]=decimal%8;
        decimal/=8;
        i++;
    }printf("octal:");
    for(int j=i-1;j>=0;j--){
        printf("%d",octal[j]);

    }
}*/
//50
int main(){
    //hexa to deci
    char hexa[20];
    int decimal=0,k=0;
    printf("eneter the hexa number=");
    scanf("%s",hexa);\
    int len=strlen(hexa);
    int j=0;
    for(k=len-1;k>=0;k--){
        char ch=toupper(hexa[k]);
        if(ch>='0'&&ch<='9') decimal+=(ch-'0')*pow(16,j);
        else if(ch>='A'&&ch<='F') decimal+=(ch-'A'+10)*pow(16,j);
        j++;
    } 
    printf("decimal=%d\n",decimal);

}



//51
/*int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }return f;
}
int binomialCoefficient(int n,int k){
    return fact(n)/(fact(k)*fact(n-k));
}
int main(){
    int n;
    printf("enter number of rows=");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int space=0;space<n-i-1;space++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",binomialCoefficient(i,j));
        }printf("\n");
    }
}*/
