#ifndef LOG_H
#define LOG_H

#include <stdbool.h>
#include <stdio.h>

#define DEFAULT_PATH "/var/log/tiv/"

typedef enum { Fatal, Error, Warning, Info, Debug, Trace } logLevels;

/* * log: create a log_message with specified level, prints out log message if
 * level is current.
 * - level: set level of log, available values: Trace, Debug, Info, Warning,
 * Error & Fatal.
 * - fmt: specify message format example: "Hello %s".
 * - ...: variadic args, will be used after format.
 */

int tiv_logtofile(char *file, bool on);
int tiv_log(logLevels level, char *fmt, ...);
#endif // !LOG_H
