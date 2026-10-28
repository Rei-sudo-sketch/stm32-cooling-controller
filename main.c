
#include <stdio.h>

enum CoolingState {
    NORMAL,
    WARNING, 
    OVERHEAT
};

enum CoolingState State = NORMAL;

enum CoolingState getCoolingState(int temperature)
{
    if(temperature < 90)
    {
        return NORMAL;
    }
    else if (temperature < 110)
    {
        return WARNING;
    }
    else
    {
        return OVERHEAT;
    }
}

int main(void)
{
   enum CoolingState State = NORMAL;
   int temperature = 110; 
   State = getCoolingState(temperature);
   printf("Temperature: %d C\n",temperature);
   if(State == NORMAL)
   {
     printf("Cooling State: NORMAL");
   }
   else if(State == WARNING)
   {
    printf("Cooling State: WARNING");
   }
   else
   {
    printf("Cooling State: OVERHEATING"); 
   }

}
