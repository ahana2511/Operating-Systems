//Program to implement Schdeduling Algorithms
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>  //Contains data type such as pid_t
#include <sys/wait.h>   //Contains the wait system call
#include <unistd.h>     //Contains the API for POSIX system calls

typedef struct{
    int pid;
    int arrival_time;
    int burst_time;
    int rem_time;
    int priority;
}Process;
