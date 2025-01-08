#include <stdio.h>
#include <time.h>
#include <sys/time.h>

#include "header/log.h"

// Function to get the current timestamp in HH:MM:SS.mmm format
void get_timestamp(char *buffer, size_t size)
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    struct tm *tm_info = localtime(&tv.tv_sec);
    strftime(buffer, size, "%H:%M:%S", tm_info);
    snprintf(buffer + 8, size - 8, ".%03ld", tv.tv_usec / 1000);
}

// Generic logging function
void log_message(const char *level, const char *color, const char *message, eTimestamp timeFlag)
{
    char timestamp[16] = "";
    if (timeFlag)
    {
        get_timestamp(timestamp, sizeof(timestamp));
        printf("|%s|", timestamp);
    }

    printf("%s%-4s"RESET"│ %s\n", color, level, message);
}

// INFO logging function
void log_info(const char *message, eTimestamp timeFlag)
{
    log_message("INFO", BLUE, message, timeFlag);
}

// WARN logging function
void log_warn(const char *message, eTimestamp timeFlag)
{
    log_message("WARN", GRAY, message, timeFlag);
}

// ERR logging function
void log_err(const char *message, eTimestamp timeFlag)
{
    log_message("ERR", RED, message, timeFlag);
}
