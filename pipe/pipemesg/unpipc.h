#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>
#include <stdarg.h>   //va_arg ....
#include <limits.h>  // PIPE_BUF


#define MAXLINE 80
