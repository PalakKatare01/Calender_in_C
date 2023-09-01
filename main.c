#include <stdio.h>
#include <stdlib.h>
//Global declaration
int set_1st_weekday(int year){
   int d;

   d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;

}
int main()
{
    system("Color 6F");//console color and text color
    int year,weekDay=0,startingDay;



    printf("\nEnter your desired year: ");
    scanf("%d",&year);
    char *months[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};

    //LEAP year condition
    if((year%4==0&&year%100!=0)||year%400==0)
        monthDay[1]=29;
        startingDay=set_1st_weekday(year);


    for(int month=0;month<12;month++){
            int dayInmonth;
                     dayInmonth=monthDay[month];
        printf("\n\n----------------------**** %s ****----------------------",months[month]);
        printf("\n   Sun  Mon  Tus  Wed  Thus  Fri  Sat\n");


        for(weekDay=0;weekDay<startingDay;weekDay++){
            printf("     ");
        }

        for(int day=1;day<=dayInmonth;day++){
            printf("%5d",day);

            if (++weekDay>6){
                printf("\n");
                weekDay=0;
            }
            startingDay=weekDay;
        }


    }




        return 0;
}
