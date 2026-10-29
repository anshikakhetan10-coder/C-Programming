#include <stdio.h>
struct Sample
{
int sampleID;
char sampleType[30];
float initialMass;
float finalMass;
float percentageChange;
};
int main()
{
struct Sample s[100];
int n, i;
printf("Enter number of samples:");
scanf("%d", &n);
for(i=0; i<n; i++)
{
printf("\nEnter details of sample %d\n", i+1);
printf("Enter Sample ID:");
scanf("%d", &s[i].sampleID);
printf("Enter Sample type:");
scanf("%29s", s[i].sampleType);
printf("Enter Initial Mass:");
scanf("%f", &s[i].initialMass);
printf("Enter Final Mass:");
scanf("%f", &s[i].finalMass);
s[i].percentageChange=((s[i].finalMass- s[i].initialMass)/ s[i].initialMass)*100;
}
printf("\n-----Bioengineering Sample Report-----\n");
for(i=0; i<n; i++)
{
printf("\nSample ID: %d", s[i].sampleID);
printf("\nSample Type: %s", s[i].sampleType);
printf("\nInitial Mass: %.2f", s[i].initialMass);
printf("\nFinal Mass: %.2f", s[i].finalMass);
printf("\nPercentage Mass Change: %.2f%%\n", s[i].percentageChange);
}
return 0;
}





