#include <stdio.h>
#include <stdlib.h>
//This funtion is to calculate the total cahrge for the inpatients
int inpatient(int numberofdays,float dailyrate,int chargesforhospital,int Hospitalmedic)
{int totalin=(numberofdays*dailyrate)/100+chargesforhospital+Hospitalmedic;

return totalin;
}
//This function is to calculate the outpatients total
int out(int chargesforhospital,int Hospitalmedic){

  int outtotal=chargesforhospital+Hospitalmedic;
    return outtotal;
}


int main()

{
    int choices;
    int days,chargeshospi,medical;
    float rate;
     //Information about hospital
    printf("::::::::::::::::::ALAN GALPIN HOSPITAL:::::::::::::::::\n");
    //This information willbe dispayed to enable the user make achoice
    printf("Hey choose 1.Inpatient and 2.Outpatient\n");
    scanf("%d",&choices);
    //We shall use this if statement to enable one choose from the two services
    if(choices==1){
            printf(".........INPATIENT........................\n");
printf("Enter the number of days\n");
scanf("%d",&days);
printf("Enter the dailyrate\n");
scanf("%f",&rate);
printf("Enter the charges for hospital\n");
scanf("%d",&chargeshospi);
printf("Enter the Medication fees\n");
scanf("%d",&medical);
printf("THE TOTALFEES ARE %d",inpatient(days,rate,chargeshospi,medical));
    }
    else if(choices==2)
    {
        printf("...............OUTPATIENT.....................\n");
printf("Enter the charges for hospital\n");
scanf("%d",&chargeshospi);
printf("Enter the Medication fees\n");
scanf("%d",&medical);
printf("THE TOTALFEES ARE %d",out(chargeshospi,medical));
    }

    return 0;
}
