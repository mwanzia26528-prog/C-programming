#include <stdio.h>
#include <math.h>

int main() {
    float principal, time, rate, compound_interest, amount;
    int compounding;
    
    printf("=== COMPOUND INTEREST CALCULATOR ===\n");
    
    // Accept input values
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    
    printf("Enter the rate of interest (in %%): ");
    scanf("%f", &rate);
    
    printf("Enter compounding frequency per year (1 for annual, 4 for quarterly, 12 for monthly): ");
    scanf("%d", &compounding);
    
    // Calculate compound interest
    float rate_decimal = rate / 100;
    amount = principal * pow((1 + rate_decimal/compounding), (compounding * time));
    compound_interest = amount - principal;
    
    // Display results
    printf("\n!!!!!!RESULTS!!!!!\n");
    printf("Principal Amount: ₹%.2f\n", principal);
    printf("Time: %.2f years\n", time);
    printf("Rate of Interest: %.2f%%\n", rate);
    printf("Compounding Frequency: %d times per year\n", compounding);
    printf("Compound Interest: ₹%.2f\n", compound_interest);
    printf("Total Amount: ₹%.2f\n", amount);
    
    return 0;
}