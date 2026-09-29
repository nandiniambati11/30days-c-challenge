//TripCalc: A student is planning a road trip. Write a C program to read the total distance to be travelled (in kilometres), the vehicle's mileage (kilometres per litre), and the current fuel price per litre. Calculate and display the amount of fuel required for the trip and the total fuel cost
#include <stdio.h>

int main()
{
float distance, mileage, fuelPrice, fuelRequired, totalCost;
printf("Enter distance (km): ");
scanf("%f", &distance);
printf("Enter mileage (km/l): ");
scanf("%f", &mileage);
printf("Enter fuel price (Rs/litre): ");
scanf("%f", &fuelPrice);
fuelRequired = distance / mileage;
totalCost = fuelRequired * fuelPrice;
printf("Fuel required = %.2f L\n", fuelRequired);
printf("Total fuel cost = Rs %.2f\n", totalCost);
return 0;
}
