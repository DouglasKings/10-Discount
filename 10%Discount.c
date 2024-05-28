   #include <stdio.h>

   double calculateTotalCost(double Quantity, double unitCost);
   
   int main(){

    double Quantity, unitCost, totalCost;

    printf("Enter the quantity: ");
    scanf("%lf", &Quantity);
    printf("Enter the unitCost: ");
    scanf("%lf", &unitCost);

    totalCost = calculateTotalCost(Quantity, unitCost);

    printf("The quantity is %.2lf \n", Quantity);    
    printf("The unitCost is %.2lf \n", unitCost);
    printf("The discount for purchased quantity is %.2lf \n", totalCost);


    return 0;
   }

   double calculateTotalCost(double Quantity, double unitCost){
    double totalCost = Quantity * unitCost;
    if(totalCost > 1000){
        totalCost *= 0.10 ;
    }
    return totalCost;
   }

