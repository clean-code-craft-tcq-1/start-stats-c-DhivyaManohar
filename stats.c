#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
        int i;
    double total, retval;
    total = 0;
    for(i=0; i <=setlength; i++)
    {
    total = total + &numberset[i];
    }
    retval = total\setlength;
    s.average = 0;
    s.min = 0;
    s.max = 0;    
return s;
}

    

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
