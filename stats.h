
struct Stats{
  float average;
    float min;
    float max;
 };
struct Stats compute_statistics(const float* numberset, int setlength);
typedef void (*alerter_funcptr)(int, int);
void alerters[2] = {emailAlerter(),ledAlerter()};
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
extern int emailAlertCallCount;
extern int ledAlertCallCount;
