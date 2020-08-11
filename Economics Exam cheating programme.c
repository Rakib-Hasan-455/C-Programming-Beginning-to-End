#include<stdio.h>
int main()
{
	int choice;
	printf("What you wanna do? Choose\n");
	printf("1.PED/YED-Percent Change From Quantity\n");
	printf("2.PED/YED-percent change in price/Income\n");
	printf("3.PED Calculation with percent formula\n");
	printf("4.PED Calculation with Midpoint formula\n");
	printf("5.YED Calculation with percent formula\n");
	printf("6.YED Calculation with Midpoint formula\n");
	printf("Choice=");
	scanf("%d",&choice);
	if(choice==1){
		//percent change in quantity=Q2−Q1/(Q2+Q1)÷2×100
		float Quantity_Percent_Change;
    float Q2,Q1;
    printf("\nValue of Q1=");
    scanf("%f",&Q1);
    printf("Value of Q2=");
    scanf("%f",&Q2);
    
    printf("\nQuantity Percent Change=((Q2-Q1)/(Q2+Q1))/(2*100)\n");
    printf("Quantity Percent Change=((%.2f-%.2f)/(%.2f+%.2f))/(2*100)\n",Q2,Q1,Q2,Q1);
    Quantity_Percent_Change=((Q2-Q1)/(Q2+Q1))/(2*100);
    printf("Quantity Percent Change=%.6f %%\n",Quantity_Percent_Change);
}
if(choice==2){
		//percent change in price=P2−P1(P2+P1)÷2×100
	float Price_Percent_Change;
    float P2,P1;
    printf("\nPrice or income P1=");
    scanf("%f",&P1);
    printf("Price or income P2=");
    scanf("%f",&P2);
    Price_Percent_Change=((P2-P1)/(P2+P1))/(2*100);
    printf("\nPrice Percent Change=((P2-P1)/(P2+P1))/(2*100)\n");
    printf("Price Percent Change=((%.2f-%.2f)/(%.2f+%.2f))/(2*100)\n",P2,P1,P2,P1);
    printf("\nPrice Percent Change=%.6f %%",Price_Percent_Change);
}
if(choice==3){
//PED with percent formula=% Change in Quantity Demanded / % Change in Price
float Quantity_Percent_Change;
float Price_Percent_Change;
float PED_percent;
float Q2,Q1;
float P2,P1;
printf("Value of Q1=");
scanf("%f",&Q1);
printf("Value of Q2=");
scanf("%f",&Q2);
printf("Value of P1=");
scanf("%f",&P1);
printf("Value of P2=");
scanf("%f",&P2);
Quantity_Percent_Change=((Q2-Q1)/(Q2+Q1))/(2*100);
printf("\nQuantity Percent Change=((Q2-Q1)/(Q2+Q1))/(2*100)\n");
printf("Quantity Percent Change=((%.2f-%.2f)/(%.2f+%.2f))/(2*100)\n",Q2,Q1,Q2,Q1);
printf("\nQuantity_Percent_Change=%.6f %%\n",Quantity_Percent_Change);
Price_Percent_Change=((P2-P1)/(P2+P1))/(2*100);
	printf("\nPrice Percent Change=((P2-P1)/(P2+P1))/(2*100)\n");
    printf("Price Percent Change=((%.2f-%.2f)/(%.2f+%.2f))/(2*100)\n",P2,P1,P2,P1);
    printf("\nPrice Percent Change=%.6f %%\n",Price_Percent_Change);
PED_percent=Quantity_Percent_Change/Price_Percent_Change;
printf("PED percent=Quantity Percent Change/Price Percent Change\n");
printf("PED percent=%.6f %%/%.6f %%",Quantity_Percent_Change,Price_Percent_Change);
printf("\nPED Percent=%.2f %%\n",PED_percent);
if(PED_percent==0){
printf("\nAs Ped = %.2f %% demand is perfectly inelastic - \n demand does not change at all when the price changes –\n the demand curve will be vertical.",PED_percent);
}
if(PED_percent>0 && PED_percent<10){
printf("\nPed is between 0%% and 10%% demand is inelastic.\n(i.e. the %% change in demand from A to B is smaller than the percentage change in price),\n then demand is inelastic.");
}
if(PED_percent==10){
printf("\nAs Ped = 10%% demand is unit elastic.\n(i.e. the %% change in demand is exactly the same as the %% change in price), then demand is unit elastic.\n A 15%% rise in price would lead to a 15%% contraction in demand leaving total spending the same at each price level.");
}
//If Ped > 1, then demand responds more than proportionately to a change in price i.e. demand is elastic. For example if a 10%% increase in the price of a good leads to a 30%% drop in demand. The price elasticity of demand for this price change is –3
if(PED_percent>10){
printf("\nAs Ped is greter than 10%% so demand is unit elastic. \n If Ped > 1, then demand responds more than proportionately to a change in price. i.e. demand is elastic. \nFor example if a 10%% increase in the price of a good leads to a 30%% drop in demand. The price elasticity of demand for this price change is –3");
}

}
if(choice==4){
    float PED_Midpoint_Formula;
    float Q2,Q1,P2,P1;
    printf("Value of Q1=");
    scanf("%f",&Q1);
    printf("Value of Q2=");
    scanf("%f",&Q2);
    printf("Value of P1=");
    scanf("%f",&P1);
    printf("Value of P2=");
    scanf("%f",&P2);
    PED_Midpoint_Formula=((Q2-Q1)/((Q2+Q1)/2))/((P2-P1)/((P2+P1)/2));
    printf("\nPED=%f",PED_Midpoint_Formula);
    if(PED_Midpoint_Formula==0){
printf("\nAs Ped = %.2f demand is perfectly inelastic - \n demand does not change at all when the price changes –\n the demand curve will be vertical.",PED_Midpoint_Formula);
}
if(PED_Midpoint_Formula>0 && PED_Midpoint_Formula<1){
printf("\nPed is between 0 and 1 demand is inelastic.\n(i.e. the %% change in demand from A to B is smaller than the percentage change in price),\n then demand is inelastic.");
}
if(PED_Midpoint_Formula==1){
printf("\nAs Ped = 1 demand is unit elastic.\n(i.e. the %% change in demand is exactly the same as the %% change in price), then demand is unit elastic.\n A 15%% rise in price would lead to a 15%% contraction in demand leaving total spending the same at each price level.");
}
//If Ped > 1, then demand responds more than proportionately to a change in price i.e. demand is elastic. For example if a 10%% increase in the price of a good leads to a 30%% drop in demand. The price elasticity of demand for this price change is –3
if(PED_Midpoint_Formula>1){
printf("\nAs Ped is greter than 1 so demand is unit elastic. \n If Ped > 1, then demand responds more than proportionately to a change in price. i.e. demand is elastic. \nFor example if a 10%% increase in the price of a good leads to a 30%% drop in demand. The price elasticity of demand for this price change is –3");
}
}
if(choice==5){
//YED with percent formula=% Change in Quantity Demanded / % Change in income
float Quantity_Percent_Change;
float Income_Percent_Change;
float YED_percent;
float Q2,Q1;
float I2,I1;
printf("Value of Q1=");
scanf("%f",&Q1);
printf("Value of Q2=");
scanf("%f",&Q2);
printf("Value of I1=");
scanf("%f",&I1);
printf("Value of I2=");
scanf("%f",&I2);
Quantity_Percent_Change=((Q2-Q1)/(Q2+Q1))/(2*100);
printf("\nQuantity_Percent_Change=%.2f %%",Quantity_Percent_Change);
Income_Percent_Change=((I2-I1)/(I2+I1))/(2*100);
printf("\nPrice_Percent_Change=%.2f %%",Income_Percent_Change);
YED_percent=Quantity_Percent_Change/Income_Percent_Change;
printf("\nYED Percent=%.2f %%\n",YED_percent);
if(YED_percent<0){
printf("\nAs Yed = %.2f %%  is negative, the good is classified as  inferior.",YED_percent);
}
if(YED_percent>0){
printf("\nAs Yed = %.2f %%  is Positive, the good is classified as  Normal good.",YED_percent);
}
}
if(choice==6){
//YED with Midpoint formula=% Change in Quantity Demanded / % Change in income
//float Quantity_Percent_Change;
//float Income_Percent_Change;
float YED_Midpoint_Formula;
float Q2,Q1;
float I2,I1;
printf("Value of Q1=");
scanf("%f",&Q1);
printf("Value of Q2=");
scanf("%f",&Q2);
printf("Value of I1=");
scanf("%f",&I1);
printf("Value of I2=");
scanf("%f",&I2);
YED_Midpoint_Formula=((Q2-Q1)/((Q2+Q1)/2))/((I2-I1)/((I2+I1)/2));
    printf("\nYED=%f",YED_Midpoint_Formula);
if(YED_Midpoint_Formula<0){
printf("\nAs Yed = %.2f  is negative, the good is classified as  inferior.",YED_Midpoint_Formula);
}
if(YED_Midpoint_Formula>0){
printf("\nAs Yed = %.2f is  Positive, the good is classified as  Normal good.",YED_Midpoint_Formula);
}
}
    return 0;
}
