#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
      int i;
    float t1, t2;
    float total, retval;
    total = 0;
    
    struct Stats computedStats;
    for(i=0; i <=setlength; i++)
    {
    total = total + numberset[i];
    }
    retval = total/setlength;
    computedStats.average = retval;   
    for(i=0; i<=setlength; i++)
    {
        if(numberset[i] < numberset[i+1])
        {
            t1 = numberset[i+1];
            t2 =numberset[i];
        }
            
    }
       computedStats.min = t2;
       computedStats.max = t1;   
    retrurn computedStats;
}


int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
