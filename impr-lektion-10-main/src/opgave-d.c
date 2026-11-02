#include <stdio.h>

typedef struct {
    int second;
    int minute;
    int hour;
} time_t;

time_t new_time(time_t time_of_day, int elapsed_secs) {
    int new_hr, new_min, new_sec;
    new_sec = time_of_day.second + elapsed_secs;
    time_of_day.second = new_sec % 60;
    new_min = time_of_day.minute + new_sec / 60;
    time_of_day.minute = new_min % 60;
    new_hr = time_of_day.hour + new_min / 60;
    time_of_day.hour = new_hr % 24;
    return (time_of_day);
}


int main(void) {
    time_t original = {0,0,0};
    time_t new;
    new = new_time(original, 421337);
    printf("Original %d hours, %d minutes, %d seconds\n", original.hour, original.minute, original.second);
    printf("New %d hours, %d minutes, %d seconds\n", new.hour, new.minute, new.second);
    return 0;
}
