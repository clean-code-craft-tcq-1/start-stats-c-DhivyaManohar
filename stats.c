#include "stats.h"
#include <math.h>


struct Stats compute_statistics(const float* numberset, int setlength) {
    int i;
    float t1, t2;
    float total, retval;
    total = 0;
    
    struct Stats s;
    for(i=0; i <=setlength; i++)
    {
    total = total + numberset[i];
    }
    retval = total/setlength;
    s.average = retval; 
   if (setlength == 0)
   {
       s.average = NAN;
       s.min = NAN;
       s.max = NAN;
   }
    for(i=0; i<=setlength; i++)
    {
        if(numberset[i] < numberset[i+1])
        {
            t1 = numberset[i+1];
            t2 =numberset[i];
        }
            
    }
       s.min = t2;
       s.max = t1;   
    return s;
}
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
    
{

    if(computedStats.max > maxThreshold)
    { 
  alerters[0]= emailAlerter;
        (alerters[0])();
       
 alerters[1]= ledAlerter;
        (alerters[1])();
        //alerter_funcptr alerters[2] = {&emailAlerter,&ledAlerter};
    }
}
alerter_funcptr emailAlerter()
{
    emailAlertCallCount =1; 
    return 0;
}
alerter_funcptr ledAlerter()
{
    ledAlertCallCount  =1; 
      return 0;
}
    

    

    
        




