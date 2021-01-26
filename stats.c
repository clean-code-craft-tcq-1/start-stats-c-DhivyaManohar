#include "stats.h"

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
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats s)
    
{

    if(s.max > maxThreshold)
    { 
        emailAlerter = 1;
        ledAlerter = 1;
    }
    emailAlertCallCount = emailAlerter;
    ledAlertCallCount = ledAlerter;
}

    

    
        




