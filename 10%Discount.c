   #include <stdio.h>

  // Function Prototypes
double calculateDiscount(int quantity);
double calculateRevenue(double unitPrice, int quantity, double discountRate);
   
   int main(){

    double Quantity, unitCost, totalCost;

    printf("Enter the quantity: ");
    scanf("%lf", &Quantity);
    printf("Enter the unitCost: ");
    scanf("%lf", &unitCost);

      // Calculate the discount rate based on the quantity
    double discountRate = calculateDiscount(quantity);

    // Calculate the revenue after applying the discount
    double revenue = calculateRevenue(unitPrice, quantity, discountRate);

    printf("The quantity is %.2lf \n", Quantity);    
    printf("The unitCost is %.2lf \n", unitCost);
    printf("The revenue after discount is: %.2f\n", revenue);


    return 0;
   }

   // Function to calculate the discount rate based on the quantity
double calculateDiscount(int quantity) {
    if (quantity >= 100 && quantity <= 120) {
        return 0.10; // 10% discount
    } else if (quantity > 120) {
        return 0.15; // 15% discount
    } else {
        return 0.00; // No discount
    }
}

// Function to calculate the revenue after applying the discount
double calculateRevenue(double unitPrice, int quantity, double discountRate) {
    double originalTotal = unitPrice * quantity;
    double discountedTotal = originalTotal - (originalTotal * discountRate);
    return discountedTotal;
}
