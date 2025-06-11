//sum of two numbers
#include<stdio.h>
/*int main(){
    int sum,x,y;
    printf("Enter first number:\n");
    scanf("%d",&x);
    printf("Enter the second num:\n");
    scanf("%d",&y);
    sum=x+y;
    printf("%d",sum);
}
    */
//arithmetic operations
/*int main(){
    int x,y;
    printf("Enter first number:\n");
    scanf("%d",&x);
    printf("Enter the second num:\n");
    scanf("%d",&y);
    printf("Addition:%d\n",x+y);
    printf("Subtraction:%d\n",x-y);
    printf("MUL:%d\n",x*y);
    printf("Division:%d\n",x/y);
    printf("Modulus:%d\n",x%y);

}*/
//perimeter of rectangle
/*int main(){
    int length,breadth;
    printf("Enter length:\n");
    scanf("%d",&length);
    printf("Enter breadth:\n");
    scanf("%d",&breadth);
    printf("perimeter:%d",2*(length+breadth));

}*/
//area of rectangle
/*int main(){
    int length,breadth;
    printf("Enter length:\n");
    scanf("%d",&length);
    printf("Enter breadth:\n");
    scanf("%d",&breadth);
    printf("Area:%d",length*breadth);
}*/
//C program to enter radius of a circle and find its diameter, circumference and area
/*int main(){
    int radius;
    const int PI=3.14;
    printf("Enter radius:\n");
    scanf("%d",&radius);
    printf("Diameter%d\n",2*radius);
    printf("Circumference%d\n",2*PI*radius);
    printf("Area%d\n",PI*radius*radius);
}*/
//C program to enter length in centimeter and convert it into meter and km
/*int main(){
    int cm;
    printf("Enter in cm");
    scanf("%d",&cm);
    printf("meter:%f\n",cm/100.0);
    printf("km:%f\n",cm/100000.0);
}*/
//C program to enter temperature in °Celsius and convert it into °Fahrenheit.
/*int main(){
    int celsius;
    printf("Enter in celsius");
    scanf("%d",&celsius);
    printf("In Fahrenheit:%f\n",((9.0/5.0)*celsius)+32);
}*/
//fahrenheit to celsius
/*int main(){
    int F;
    printf("Enter in fahrenheit");
    scanf("%d",&F);
    printf("In celsius:%f\n",(5.0/9.0)*(F-32));
}*/
//C program to convert days into years, weeks and days.
/*int main(){
    int days;
    printf("Enter days");
    scanf("%d",&days);
    printf("years:%d\n",days/360);
    printf("weeks%d\n",days/7);
    printf("months%d\n",days/30);
}*/
//power
#include<math.h>
/*int main(){
    int num,power;
    printf("Enter num");
    scanf("%d",&num);
    printf("enter power");
    scanf("%d",&power);
    printf("Result:%f\n",pow(num,power));
}*/
//C program to enter any number and calculate its square root.
/*int main(){
    int num;
    printf("Enter num");
    scanf("%d",&num);
    printf("Sroot:%f\n",sqrt(num));
}*/
//C program to enter two angles of a triangle and find the third angle
/*int main(){
    float a1,a2;
    printf("Enter angle1:");
    scanf("%f",&a1);
    printf("enter angle2:");
    scanf("%f",&a2);
    printf("third angle:%f\n",180-(a1+a2));
}*/
//C program to enter base and height of a triangle and find its area.
/*int main(){
    float base,height;
    printf("Enter base:");
    scanf("%f",&base);
    printf("enter height:");
    scanf("%f",&height);
    printf("area:%f\n",(1.0/2.0)*(base*height));
}*/
//calculate area of an equilateral triangle.
/*int main(){
    float side;
    printf("Enter side:");
    scanf("%f",&side);
    printf("area:%f\n",(sqrt(3)/4)*side*side);
}*/
//C program to enter marks of five subjects and calculate total, average and percentage.
/*int main(){
    float m1,m2,m3,m4,m5,total;
    printf("Enter sub1marks:");
    scanf("%f",&m1);
    printf("Enter sub2:");
    scanf("%f",&m2);
    printf("Enter sub3:");
    scanf("%f",&m3);
    printf("Enter sub4:");
    scanf("%f",&m4);
    printf("Enter sub5:");
    scanf("%f",&m5);
    total=(m1+m2+m3+m4+m5);
    printf("total:%f\n",total);
    printf("avg:%f\n",total/5);
    printf("percentage:%f\n",total/500.0*100);
}*/
//C program to enter P, T, R and calculate Simple Interest.
int main(){
    float p,t,r,a;
    printf("Enter p,t,r:");
    scanf("%f%f%f",&p,&t,&r);
    printf("simple interest:%f\n",(p*t*r)/100.0);
    a=pow((1+(r/100)),t);
    printf("compound interest:%f\n",p*a-p);
}