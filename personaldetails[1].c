#include <stdio.h>

int main() {
  float height;
  double bankbalance;
  long long phonenumber;
  
  //prompt user for input
  printf("Enter your height: ");
  scanf("%f", &height);
  
  printf("Enter your bankbalance: ");
 scanf("%lf", &bankbalance);
  
  printf("Enter you phone number: ");
  scanf("%lld", &phonenumber);
  
  return 0;
  }