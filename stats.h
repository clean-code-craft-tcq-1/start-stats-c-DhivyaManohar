
struct Stats{
  float average;
    float min;
    float max;
 };
struct Stats compute_statistics(const float* numberset, int setlength);
typedef void (*alerter_funcptr)(int, int);
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
//int *ledAlerter;
//int *emailAlerter;
extern int emailAlertCallCount;
extern int ledAlertCallCount;
