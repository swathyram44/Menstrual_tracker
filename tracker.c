#include "tracker.h"

// Add days to a date
struct tm addDays(struct tm date, int days) {
    time_t t = mktime(&date);
    t += (days * 24 * 60 * 60);
    struct tm *newDate = localtime(&t);
    return *newDate;
}

// Add new period data
void add_period_data() {
    struct CycleData data;
    printf("Enter start date (DD MM YYYY): ");
    scanf("%d %d %d", &data.day, &data.month, &data.year);
    printf("Enter cycle duration (in days): ");
    scanf("%d", &data.duration);

    FILE *fp = fopen(HISTORY_FILE, "a");
    if (fp == NULL) {
        printf("❌ Error opening history file!\n");
        return;
    }
    fprintf(fp, "%02d %02d %04d %d\n", data.day, data.month, data.year, data.duration);
    fclose(fp);

    predict_next_cycle(data);
}

// Predict next cycle
void predict_next_cycle(struct CycleData last) {
    struct tm start = {0};
    start.tm_mday = last.day;
    start.tm_mon = last.month - 1;
    start.tm_year = last.year - 1900;

    struct tm next = addDays(start, last.duration);
    printf("\nNext expected period: %02d-%02d-%04d\n",
           next.tm_mday, next.tm_mon + 1, next.tm_year + 1900);
    printf("-----------------------------------\n");
}

// View history
void view_history() {
    FILE *fp = fopen(HISTORY_FILE, "r");
    if (fp == NULL) {
        printf("No history found yet.\n");
        return;
    }

    struct CycleData data;
    printf("\n--- Period History ---\n");
    while (fscanf(fp, "%d %d %d %d",
                  &data.day, &data.month, &data.year, &data.duration) == 4) {
        struct tm start = {0};
        start.tm_mday = data.day;
        start.tm_mon = data.month - 1;
        start.tm_year = data.year - 1900;

        struct tm next = addDays(start, data.duration);
        printf("%02d-%02d-%04d | Next: %02d-%02d-%04d | Cycle: %d days\n",
               data.day, data.month, data.year,
               next.tm_mday, next.tm_mon + 1, next.tm_year + 1900, data.duration);
    }
    printf("-----------------------------------\n");
    fclose(fp);
}

