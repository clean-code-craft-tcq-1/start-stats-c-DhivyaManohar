
struct Stats{
  float average;
    float min;
    float max;
 };
struct Stats compute_statistics(const float* numberset, int setlength);
typedef void (*alerter_funcptr)();
alerter_funcptr (*alerters[])(void)={emailAlerter,ledAlerter};
int emailAlerter;
int ledAlerter;
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
//void ledAlerter;
//void emailAlerter;
extern int emailAlertCallCount;
extern int ledAlertCallCount;
