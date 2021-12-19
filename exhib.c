#include <stdio.h>

double d;
double hour;
double totsl;
double sleepinput;
double unsleep;
double proc;
double food;
double unbad;
double adjust;
double adjustdays; 

int main() {
printf("hello please input the number of days until your exam is due \n");
scanf("%lf", &d);

hour = d * 24.0;

printf("how long do you sleep for in hours \n");
scanf("%lf",&sleepinput);

totsl = sleepinput * d;
unsleep = hour - totsl;
proc = 1.59 * d;
food = 6 * d;
unbad = unsleep - proc - food;
adjust = unbad / 2.00;
adjustdays = adjust / 24.0;

printf("the total days you have to finish the exam is \n ");
printf("%0.13f", adjustdays);








}