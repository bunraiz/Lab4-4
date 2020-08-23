#include <stdio.h>
int main(void)
{
  float L1, L2, SumL, Height, Area;
  printf("Enter L1 : ");
  scanf("%f",&L1); 
  printf("Enter L2 : ");
  scanf("%f",&L2);
  printf("Enter Height : ");
  scanf("%f",&Height);
  if (((L2 - L1) * 100) / L1 >= 40){
  	SumL = L1 + L2;
  	Area = 0.5 * Height * SumL;
  	printf("Trapezoidal Area is : %.2f",Area);
  }
  else{
  	printf("Program Not Working Cause L2 Not Longest Than 40 %% L1");
  }
}