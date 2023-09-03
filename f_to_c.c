//fahhrenhhheit to celsius//

#include<stdio.h>
main(){
float c, f;
printf("Enter Temp. in fahrenheit scale \n");
scanf("%f", &f);
c=(f-32)*0.55;
printf("Temperature in celsius scale:-  %f", c);

    return 0;
}