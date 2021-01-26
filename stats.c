#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    float average;
    float min;
    float max;
    int i;
    float t1, t2;
    float total, retval;
    total = 0;
    for(i=0; i <=setlength; i++)
    {
    total = total + numberset[i];
    }
    retval = total/setlength;
    average = retval;   
    for(i=0; i<=setlength; i++)
    {
        if(numberset[i] < numberset[i+1])
        {
            t1 = numberset[i+1];
            t2 =numberset[i];
        }
            
    }
        min = t2;
        max = t1;   
}


int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
