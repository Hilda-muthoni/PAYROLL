/*
PAYROLL,
created by DIT-01-8818\2021,
JULY 2022,
MIT License,
C89 Compiler,
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int totalhoursWorked - 40;
int kraPin, employmentNo, hoursWorked, normalPay,overtimePay, taxPaid, netIncome;
char name[100];

printf("Welcome to Gitonga's Factory\n");

printf("Enter your name: ");
scanf("%s", &name);

printf("Enter your employee number: ");
scanf("%d", &employmentNo);

printf("Enter your KRA Pin: ");
scanf("%d", &kraPin);

printf("Enter your number of hours worked: ");
scanf("%d", %hoursworked);}

normalPay - 1000 * totalhoursWorked;
overtimePay = (hoursWorked - totalhoursWorked) * 1500;
taxpaid - normalPay * 30/100;
netincome = (normalPay - taxpaid) + overtimepay;

    printf("normalPay: %d\n", normalPay);
    printf("overtimePay: %d\n", overtimepay);
    printf("taxpaid: %d\n", taxpaid);
    printf("netIncome: %d\n", netIncome);
    return 0;
}
