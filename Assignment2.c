#include<stdio.h>
/*int main(){
    int given_age=27;
    int after_3_years=9;
    printf("total ages after 3 years:%d",27+9);
}*/
//Q2
/*int main(){
    //calculator has 9numbers
    printf("product is:%d\n",1*2*3*4*5*6*7*8*9);
}*/
//Q3
/*int main(){
    int jessy_runs=12;
    int two_weeks=14;//14 days
    printf("overall laps:%d\n",14*12);
}*/
//Q4
/*int main(){
    printf("simplified:%d\n",133-19*2+15);
}*/
//q5
/*int main(){
    int diff=177-173;
    printf("next seq:%d\n",165-diff);
}*/
//q6
/*int main(){
    int annual_income=288000;
    int savings=36000;
    printf("expenditure:%d\n",annual_income-savings);
}*/
//q7
/*int main(){
    printf("result:%d\n",45/9*3+15-6);
}*/
//Q8,Q9
/*int main(){
    int m=1;
    printf("simplified:%d\n",(36/(-9))/((-24)/6));
    printf("answer:%d\n",(-13+1)/-3);
}*/
/*int main(){
    int price=12960;
    int toys=96;
    int left=1015;
    printf("each toy cost:%d\n",(12960-1015)/96);
}*/
//Q11
#define PI 3.14
/*int main(){
    int r,h;
    printf("enetr radius and height");
    scanf("%d%d",&r,&h);
    printf("Volume=%f\n",PI*2*r*h);
}*/
//Q12
/*int main(){
    int lm,lcm,bm,bcm,hm,hcm,l,b,h,volume,v_l;
    printf("enetr length:");
    scanf("%d%d",&lm,&lcm);
    printf("enter breadth:");
    scanf("%d%d",&bm,&bcm);
    printf("enetr the height");
    scanf("%d%d",&hm,&hcm);
    l=(lm*100)+lcm;
    b=(bm*100)+bcm;
    h=(hm*100)+hcm;
    volume=l*b*h;
    v_l=volume/1000;
    printf("litres can be filled in tankk is %d:\n",v_l);
}*/
//Q14
/*int main(){
    float l,b,h,volume;
    printf("enetr length,breadth,height in m:");
    scanf("%f%f%f",&l,&b,&h);
    volume=l*b*h;
    printf("%f",volume);
    float each_person=3.6;
    printf("persons accomodated=%f\n",volume/each_person);
}*/
//q15
/*int main(){
    int cost=20,sell=45;
    int profit=sell-cost;
    printf("profit is=%d\n",profit);
    printf("profit percentage=%f%%\n",(profit/20.0)*100);
}*/
//Q16
/*int main(){
    float cost=27.50,sell=28.50;
    float profit=sell-cost;
    printf("profit is=%f\n",profit);
    printf("profit percentage=%f%%\n",(profit/cost)*100);
}*/

//switch case problems
//Q1
/*int main(){
    char alphabet;
    printf("enter the alphabet=");
    scanf("%c",&alphabet);
    switch(alphabet){
        case 'a':
        case 'A':
            printf("vowel");
            break;
        case 'e':
            case 'E':
                printf("vowel");
                break;
        case 'i':
            case 'I':
                printf("vowel");
                break;
        case 'o':
            case 'O':
                printf("vowel");
                break;
        case 'u':
            case 'U':
                printf("vowel");
                break;
        default:
            printf("consonant");
}
}*/
//Q2
/*int main(){
    int day;
    printf("enter the day number like1 for mon=");
    scanf("%d",&day);
    switch(day){
        case 1:
            printf("monday");
            break;
        case 2:
                printf("tuesday");
                break;
        case 3:
                printf("wednesday");
                break;
        case 4:
                printf("thursday");
                break;
        case 5:
                printf("friday");
                break;
        case 6:
                printf("saturday");
                break;
        case 7:
            printf("sunday");
            break;
        default:
            printf("enetr valid number");
}
}*/
//q3
/*int main(){
    int month;
    printf("enetr the month number");
    scanf("%d",&month);
    switch(month){
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            printf("no of days is 31");
            break;
        case 2:
            printf("29 or 28 days");
            break;
        case 4:case 6:case 9:case 11:
            printf("30 days");
            break;
    }
}*/
//Q4
/*int main(){
    int x,y;
    printf("enetr two numbers:");
    scanf("%d%d",&x,&y);
    switch(x>y){
        case 1:
            printf("x is maximum");
            break;
        case 0:
            printf("y is maximum");
    }
}*/
//Q5
/*int main(){
    int num;
    printf("enetr number:");
    scanf("%d",&num);
    switch(num%2==0){
        case 1:
            printf("num is even");
            break;
        case 0:
            printf("number is odd");
    }
}*/
//Q6
/*int main(){
    int a,b,c,delta;
    printf("enter the eq values:a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    delta=(b*b)-(4*a*c);
    int root=(delta>0)? 1:(delta<0)? -1:0;
    switch(root){
        case 1:
            printf("roots are real values");
            break;
        case 0:
            printf("roots are equal");
            break;
        case -1:
            printf("roots are imaginary");
            break;
        default:
            printf("invalid");
    }
}*/
//Q7
int main(){
    int x,y;
    char operator;
    printf("enetr the numbers=");
    scanf("%d%d",&x,&y);
    printf("enter operation to be performed=");
    scanf(" %c",&operator);
    switch(operator){
        case '+':
            printf("sum:%d\n",x+y);
            break;
        case '-':
            printf("sub:%d\n",x-y);
            break;
        case '*':
            printf("mul:%d\n",x*y);
            break;
        case '/':
            printf("div:%f\n",(float)x/y);
            break;
        case '%':
            printf("mod:%d\n",x%y);
            break;
        default:
            printf("invalid operator");
    }
}





