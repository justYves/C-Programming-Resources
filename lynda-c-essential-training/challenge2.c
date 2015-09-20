#include <stdio.h>

double celsiusToFarenheit(int);
double celsiustoKelvin(int);
const double boilingCelsius = 100;
const double freezingCelsius = 0;

int main(int argc, char *argv[])
{
double farenheit;
double kelvin;
double celsius;

printf("Please enter a temperature:\n");
scanf("%lf",&celsius);
printf("%.1lf C equals to %.1lf F and %.1lfK \n",celsius,celsiusToFarenheit(celsius),celsiustoKelvin(celsius));

celsius = boilingCelsius;
printf("%.1lf C equals to %.1lf F and %.1lfK \n",celsius,celsiusToFarenheit(celsius),celsiustoKelvin(celsius));

celsius = freezingCelsius;
printf("%.1lf C equals to %.1lf F and %.1lfK \n",celsius,celsiusToFarenheit(celsius),celsiustoKelvin(celsius));

  return 0;
}


double celsiusToFarenheit(int celsius)
{
  return celsius + 273;
}

double celsiustoKelvin (int celsius)
{
  return celsius * 9 /5  + 32;
}