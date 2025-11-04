#ifndef TRACKER_H
#define TRACKER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define HISTORY_FILE "cycle_history.txt"

struct CycleData {
    int day;
    int month;
    int year;
    int duration;
};

void add_period_data();
void view_history();
struct tm addDays(struct tm date, int days);
void predict_next_cycle(struct CycleData last);

#endif

