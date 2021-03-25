#include<stdio.h>
#include<math.h>
int sq(int a){
    int num= 10;
for(int i = 1; i<a;i++)
            {
        num= num*10;
        }
return num;
}
int main(void){
long long int counta=0, countb=0, tempa, tempb, a,b,c,d,ac,bd,abcd,abcd1, solu;
long long int num1, num2;
printf("Enter two numbers");
scanf("%lld %lld",&num1, &num2);
tempa = num1;
        while(tempa>0){
            tempa = tempa/10;
            counta++;
        }
tempb = num2;
        while(tempb>0){
            tempb = tempb/10;
            countb++;
        }
a =num1/sq(counta/2);
b= num1%(int)sq(counta/2);
//printf("%d", a2);
c =num2/sq(countb/2);
d= num2%(int)sq(countb/2);
//printf("%d", b2);
ac= a*c;
bd = b*d;
abcd=(a+b)*(c+d);
abcd1=  abcd-ac-bd;
//printf("%d", abcd);

solu=(ac*sq(counta))+bd+(abcd1*sq(counta/2));
printf("%lld", solu);
return 0;
    }

