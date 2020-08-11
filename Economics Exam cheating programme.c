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
    Quantity_Percent_Change=((Q2-Q1)/(Q2+Q1))/(2*100);
    printf("\nQuantity Percent Change=((Q2-Q1)/(Q2+Q1))/(2*100)\n");
    printf("Quantity Percent Change=((%.2f-%.2f)/(%.2f+%.2f))/(2*100)\n",Q2,Q1,Q2,Q1);
    float x=Q2-Q1;
    float y=Q2+Q1;
    printf("Quantity Percent Change=(%.2f/%.2f)/(%.2f)\n",x,y,2.0*100.0);
    float z=(Q2-Q1/Q2+Q1);
    printf("Quantity Percent Change=(%.2f)/(%.2f)\n",z,(2.0*100.0));
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
    float x=P2-P1;
    float y=P2+P1;
    printf("Quantity Percent Change=(%.2f/%.2f)/(%.2f)\n",x,y,2.0*100.0);
    float z=(P2-P1/P2+P1);
    printf("Quantity Percent Change=(%.2f)/(%.2f)\n",z,(2.0*100.0));
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
    printf("\t\t\t=((%.2f-%.2f)/(%.2f+%.2f))/(2*100)\n",Q2,Q1,Q2,Q1);
    float x1=Q2-Q1;
    float y1=Q2+Q1;
    printf("\t\t\t=(%.2f/%.2f)/(%.2f)\n",x1,y1,2.0*100.0);
    float z1=(Q2-Q1)/(Q2+Q1);
    printf("\t\t\t=(%.2f)/(%.2f)\n",z1,(2.0*100.0));
    printf("\t\t\t=%.6f %%\n",Quantity_Percent_Change);
	Price_Percent_Change=((P2-P1)/(P2+P1))/(2*100);
    printf("\nPrice Percent Change=((P2-P1)/(P2+P1))/(2*100)\n");
    printf("\t\t\t=((%.2f-%.2f)/(%.2f+%.2f))/(2*100)\n",P2,P1,P2,P1);
    float x2=P2-P1;
    float y2=P2+P1;
    printf("\t\t\t=(%.2f/%.2f)/(%.2f)\n",x2,y2,2.0*100.0);
    float z2=(P2-P1)/(P2+P1);
    printf("\t\t\t=(%.2f)/(%.2f)",z2,(2.0*100.0));
    printf("\n\t\t\t=%.6f %%\n",Price_Percent_Change);
    PED_percent=Quantity_Percent_Change/Price_Percent_Change;
printf("PED percent=Quantity Percent Change/Price Percent Change\n");
printf("\t\t\t=%.6f %%/%.6f %%",Quantity_Percent_Change,Price_Percent_Change);
printf("\n\t\t\t=%.2f %%\n",PED_percent);
if(PED_percent==0 || PED_percent==-0){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
printf("\nAs Ped = %.2f %% demand is perfectly inelastic  \n ",PED_percent);
/*demand does not change at all when the price changes –\n the demand curve will be vertical.*/
}
if((PED_percent>0 && PED_percent<10) || (PED_percent<0 && PED_percent>-10)){
printf("\nPed is between 0%% and 10%% demand is inelastic.\n");
/*(i.e. the %% change in demand from A to B is smaller than the percentage change in price),\n then demand is inelastic.*/
}
if(PED_percent==10 || PED_percent==-10 ){
printf("\nAs Ped = 10%% demand is unit elastic.\n");
/*(i.e. the %% change in demand is exactly the same as the %% change in price), then demand is unit elastic.\n A 15%% rise in price would lead to a 15%% contraction in demand leaving total spending the same at each price level.*/
}
if(PED_percent>10 || PED_percent<-10){
printf("\nAs Ped is greter than 10%% so demand is unit elastic. \n ");
//If Ped > 1, then demand responds more than proportionately to a change in price. i.e. demand is elastic. \nFor example if a 10%% increase in the price of a good leads to a 30%% drop in demand. The price elasticity of demand for this price change is –3
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
printf("\nPED Midpoint Formula=((Q2-Q1)/((Q2+Q1)/2))/((P2-P1)/((P2+P1)/2))");
printf("\n\t\t   =((%.2f-%.2f)/((%.2f+%.2f)/2))/((%.2f-%.2f)/((%.2f+%.2f)/2))",Q2,Q1,Q2,Q1,P2,P1,P2,P1);
printf("\n\t\t   =((%.2f)/((%.2f)/2))/((%.2f)/((%.2f)/2))",Q2-Q1,Q2+Q1,P2-P1,P2+P1);
printf("\n\t\t   =(%.2f/%.2f)/(%.2f/%.2f)",(Q2-Q1),(Q2+Q1)/2.0,(P2-P1),(P2+P1)/2.0);
printf("\n\t\t   =(%.2f)/(%.2f)",(Q2-Q1)/((Q2+Q1)/2.0),(P2-P1)/((P2+P1)/2.0));
printf("\n\t\tPED=%.2f",PED_Midpoint_Formula);
    if(PED_Midpoint_Formula==0 || PED_Midpoint_Formula==-0){
printf("\nAs Ped = %.2f . So demand is perfectly inelastic .\n ",PED_Midpoint_Formula);
//demand does not change at all when the price changes –\n the demand curve will be vertical.
}
if((PED_Midpoint_Formula>0 && PED_Midpoint_Formula<1) || (PED_Midpoint_Formula<0 && PED_Midpoint_Formula>-10))
{
printf("\nAs Ped is between 0 and 1 .So demand is inelastic.\n");
//(i.e. the %% change in demand from A to B is smaller than the percentage change in price),\n then demand is inelastic.
}
if(PED_Midpoint_Formula==10 || PED_Midpoint_Formula==-10){
printf("\nAs Ped = 1 . So demand is unit elastic.\n");
//(i.e. the %% change in demand is exactly the same as the %% change in price), then demand is unit elastic.\n A 15%% rise in price would lead to a 15%% contraction in demand leaving total spending the same at each price level.
}
if(PED_Midpoint_Formula>10 || PED_Midpoint_Formula<-10){
printf("\nAs Ped is greater than 1 so demand is unit elastic.  \n");
//If Ped > 1, then demand responds more than proportionately to a change in price i.e. demand is elastic. For example if a 10%% increase in the price of a good leads to a 30%% drop in demand. The price elasticity of demand for this price change is –3
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
    printf("\nQuantity Percent Change=((Q2-Q1)/(Q2+Q1))/(2*100)\n");
    printf("\t\t\t=((%.2f-%.2f)/(%.2f+%.2f))/(2*100)\n",Q2,Q1,Q2,Q1);
    float x1=Q2-Q1;
    float y1=Q2+Q1;
    printf("\t\t\t=(%.2f/%.2f)/(%.2f)\n",x1,y1,2.0*100.0);
    float z1=(Q2-Q1)/(Q2+Q1);
    printf("\t\t\t=(%.2f)/(%.2f)\n",z1,(2.0*100.0));
    printf("\t\t\t=%.6f %%\n",Quantity_Percent_Change);
Income_Percent_Change=((I2-I1)/(I2+I1))/(2*100);
printf("\nIncome Percent Change=((I2-I1)/(I2+I1))/(2*100)\n");
    printf("\t\t\t=((%.2f-%.2f)/(%.2f+%.2f))/(2*100)\n",I2,I1,I2,I1);
    float x2=I2-I1;
    float y2=I2+I1;
    printf("\t\t\t=(%.2f/%.2f)/(%.2f)\n",x2,y2,2.0*100.0);
    float z2=(I2-I1)/(I2+I1);
    printf("\t\t\t=(%.2f)/(%.2f)",z2,(2.0*100.0));
    printf("\n\t\t\t=%.6f %%\n",Income_Percent_Change);



YED_percent=Quantity_Percent_Change/Income_Percent_Change;
printf("PED percent=Quantity Percent Change/Income Percent Change\n");
printf("\t\t\t=%.6f %%/%.6f %%",Quantity_Percent_Change,Income_Percent_Change);
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
printf("\nYED Midpoint Formula=((Q2-Q1)/((Q2+Q1)/2))/((I2-I1)/((I2+I1)/2))");
printf("\nYED Midpoint Formula=((%.2f-%.2f)/((%.2f+%.2f)/2))/((%.2f-%.2f)/((%.2f+%.2f)/2))",Q2,Q1,Q2,Q1,I2,I1,I2,I1);
printf("\nYED Midpoint Formula=((%.2f)/((%.2f)/2))/((%.2f)/((%.2f)/2))",Q2-Q1,Q2+Q1,I2-I1,I2+I1);
printf("\n\t\t   =((%.2f)/((%.2f)/2))/((%.2f)/((%.2f)/2))",Q2-Q1,Q2+Q1,I2-I1,I2+I1);
printf("\n\t\t   =(%.2f/%.2f)/(%.2f/%.2f)",(Q2-Q1),(Q2+Q1)/2,(I2-I1),(I2+I1)/2);
printf("\n\t\t   =(%.2f)/(%.2f)",(Q2-Q1)/((Q2+Q1)/2),(I2-I1)/((I2+I1)/2));
printf("\n\t\tYED=%f",YED_Midpoint_Formula);
if(YED_Midpoint_Formula<0){
printf("\nAs Yed = %.2f  is negative, the good is classified as  inferior.",YED_Midpoint_Formula);
}
if(YED_Midpoint_Formula>0){
printf("\nAs Yed = %.2f is  Positive, the good is classified as  Normal good.",YED_Midpoint_Formula);
}
}
    return 0;
}
