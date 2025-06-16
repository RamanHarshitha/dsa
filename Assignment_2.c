#include<stdio.h>
/*int main(){
    int cost=250,total_calls,calls;
    float each_call=1.25;
    printf("enter the total no of calls");
    scanf("%d",&total_calls);
    if(total_calls>100){
        calls=total_calls-100;
        printf("Bill=%f\n",250+calls*1.25);
    }
    else{
        printf("bill=%d\n",cost);
    }
}*/
//Q2
/*int main(){
    int num;
    printf("enter th number");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is even\n",num);
    }
    else{
        printf("%d is odd",num);
    }
}*/
//Q3
/*int main(){
    int num_count=0,sum=0;
    for(int i=101;i<200;i++){
        if(i%7==0){
            num_count++;
            sum+=i;

        }
    }
    printf("number of=%d\n",num_count);
    printf("sum=%d\n",sum);
}*/
//Q4
/*int main(){
    int num;
    printf("enetr the number:");
    scanf("%d",&num);
    if(num>=1000) printf("hugely positive");
    else if(num>=100 && num<=999){
        printf("very positive");
    }
    else if(num>0 && num<100){
        printf("positive");
    }
    else if(num==0) printf("zero");
    else if(num>-100 && num<0){
        printf("negative");
    }
    else if(num>-999 && num<=-100){
        printf("very negative");
    }
    else if(num<=-1000) printf("hugely negative");
}*/
//Q5
/*int main()
{
    float mass,height;
    printf("enetre the mass in kg andd height in meters:");
    scanf("%f%f",&mass,&height);
    float BMI=mass/(height*height);
    printf("BMI=%f\n",BMI);
    if(BMI<15) printf("very severely under weight");
    else if(BMI>=15.0 && BMI<16.0) printf("severely underweight");
    else if(BMI>=16.0 && BMI<18.5) printf("under weight");
    else if(BMI>=18.5 && BMI<25) printf("healthy weight");
    else if(BMI<=25 && BMI<30) printf("over weight");
    else if(BMI<=30 && BMI<35) printf("obse class 1");
    else if(BMI<=35 && BMI<40) printf("obse class II");
    else if(BMI>=40) printf("obse class III");
}*/
//Q6
/*int main(){
    int units;
    printf("enetr the consumed units=");
    scanf("%d",&units);
    if(units>0 && units<=200){
        printf("bill=%f\n",units*0.50);
    }
    else if(units>=201 && units<400){
        printf("bill=%f\n",(units*0.65)+100);
    }
    else if(units>=401 && units<=600){
        printf("bill=%f\n",(units*0.80)+230);
    }
}*/

//if problems
//Q1
/*int main(){
    int x,y;
    printf("enetr two numbers:");
    scanf("%d%d",&x,&y);
    if(x>y) printf("x is greater");
    else printf("y is maximum");
}*/
//Q2
/*int main(){
    int x,y,z;
    printf("enetr three numbers:");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z) printf("%d is greater",x);
    else if(y>x && y>z) printf("%d is greater",y);
    else printf("%d is greater",z);
}*/
//Q3
/*int main(){
    int num;
    printf("enetr number");
    scanf("%d",&num);
    if(num%2==0){
        printf("num is even");
    }
    else printf("num is odd");
}*/
//Q4
/*int main(){
    int year;
    printf("enetr the year");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("leap year");
    }
    else printf("not leap year");
}*/
//Q5,Q6
/*int main(){
    int num;
    printf("enetr the number");
    scanf("%d",&num);
    if(num>0) printf("positive");
    else if(num<0) printf("negative");
    else printf("zero");
    if(num%5==0 && num%11==0) printf("\nnumber divisible by 5 and 11");
    else printf("\nnot divisible");
}*/
//Q7
/*int main(){
    int notes,amount;
    printf("eneter the notes value like 100,500 or 2000=");
    scanf("%d",&notes);
    printf("total amunt=");
    scanf("%d",&amount);
    if(notes==100) printf("total no of notes=%d\n",amount/notes);
    else if(notes==500) printf("total no of notes=%d\n",amount/500);
    else if(notes==2000) printf("total no of notes=%d\n",amount/2000);
}*/
//Q8
/*int main(){
    char ch;
    printf("eneter the character=");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z') printf("alphabet");
    else printf("not an alphabet");
}*/
//Q9
/*int main(){
    char ch;
    printf("eneter the character=");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Vowel");
    }
    else printf("consonant");
}*/
//Q10
/*int main(){
    char ch;
    printf("eneter the character=");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z') printf("alphabet");
    else if(ch>='0' && ch<='9') printf("digit");
    else printf("special character");
}*/
//Q11
/*int main(){
    char ch;
    printf("eneter the character=");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z') printf("upper case");
    else printf("lower casee");
}*/
//Q12
/*int main(){
    int day;
    printf("enter the day num=");
    scanf("%d",&day);
    if(day==1) printf("monday");
    else if(day==2) printf("tuesday");
    else if(day==3) printf("wednesday");
    else if(day==4) printf("thursday");
    else if(day==5) printf("friday");
    else if(day==6) printf("saturday");
    else if(day==7) printf("sunday");
}*/
//Q13
/*int main(){
    int mon_num;
    printf("enetre the month number=");
    scanf("%d",&mon_num);
    if(mon_num==1 ||mon_num==3|| mon_num==5||mon_num==7||mon_num==8||mon_num==10||mon_num==12){
        printf("no of days=31");
    }
    else if(mon_num==2) printf("28/29 days");
    else printf("30 days");
}*/
//Q14
/*int main(){
    float a1,a2,a3;
    printf("enetre the three angles=");
    scanf("%f%f%f",&a1,&a2,&a3);
    float total=a1+a2+a3;
    if(total==180) printf("trinagle is valid");
    else printf("invalid");
}*/
//Q15
int main(){
    float s1,s2,s3;
    printf("enetre the sides of triangle:");
    scanf("%f%f%f",&s1,&s2,&s3);
    if((s1+s2)>s3 && (s2+s3)>s1 &&(s1+s3)>s2){
        printf("valid triangke");
    }
    else printf("not valid");
}


//Q16
/*int main(){
    float s1,s2,s3;
    printf("enetre the sides of triangle:");
    scanf("%f%f%f",&s1,&s2,&s3);
    if(s1==s2 && s1==s3) printf("equilateral");
    else if(s1==s2 && s1!=s3||s1==s3 && s1!=s2||s2==s3&& s2!=s1){
        printf("isoselus");
    }
    else printf("scalence triangle");
}*/
//Q17
/*#include<math.h>
int main(){
    float a,b,c,delta;
    printf("enetre the eqn values of a,b and c=");
    scanf("%f%f%f",&a,&b,&c);
    delta=(b*b)-(4*a*c);
    if(delta>0){
        printf("real and distinct");
        float root1=((-b)+sqrt(delta))/(2*a);
        float root2=((-b)-sqrt(delta))/(2*a);
        printf("Root1=%f\n",root1);
        printf("Root2=%f\n",root2);
    }
    else if(delta<0){
        printf("roots are imaginary");
        float realPart=-b/(2*a);
        float imagPart=sqrt(-delta)/(2*a);
        printf("root1=%f+%f\n",realPart,imagPart);
        printf("root1=%f-%f\n",realPart,imagPart);
    }
    else{
        printf("real and equal");
        float root1=-b/(2*a);
        printf("ROOT=%f\n",root1);
    }
}*/
//Q18
/*int main(){
    float cost,sell;
    printf("enetr cost and sell price");
    scanf("%f%f",&cost,&sell);
    if(sell>cost) printf("profit");
    else printf("loss");
}*/
//Q19
/*int main(){
    float s1,s2,s3,s4,s5;
    printf("enter the marks in subjects Physics, Chemistry, Biology,Mathematics and Computer.");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    float total=s1+s2+s3+s4+s5;
    float percentage=(total/500)*100;
    if(percentage>=90) printf("A grade");
    else if(percentage>=80 && percentage<90) printf("B grade");
    else if(percentage>=70 && percentage<80) printf("C grade");
    else if(percentage>=60 && percentage<70) printf("D grade");
    else if(percentage>=40 && percentage<60) printf("E grade");
    else if(percentage<40) printf("fail");
}*/
//Q20
/*int main(){
    float basic,hra,da,gross;
    printf("enter the basic salary=");
    scanf("%f",&basic);
    if(basic>=30000){
        hra=0.30*basic;
        da=0.95*basic;
        printf("Gross salary=%f\n",(basic+hra+da));
    }
    else if(basic>=20000){
        hra=0.25*basic;
        da=0.90*basic;
        printf("Gross salary=%f\n",(basic+hra+da));
    }
    else if(basic>=10000){
        hra=0.20*basic;
        da=0.80*basic;
        printf("Gross salary=%f\n",(basic+hra+da));
    }
}*/
//Q21
/*int main(){
    float units,amount;
    printf("enter the electricity unit charge");
    scanf("%f",&units);
    if(units<=50){
        amount=50*0.50;
    }
    else if(units<=150){
        amount=50*0.50+(units-50)*0.75;
    }
    else if(units<=250){
        amount=50*0.50+100*0.75+(units-150)*1.20;
    }
    else{
        amount=50*0.50+100*0.75+100*1.20+(units-250)*1.50;
    }
    float surcharge=0.20*amount;
    float total=amount+surcharge;
    printf("total electricty bill=%f",total);
}*/
    
