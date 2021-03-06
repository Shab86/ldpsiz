/**
 * @file jobqueue.h
 * @author Alan R. Rogers
 * @brief Header for jobqueue.c
 * @copyright Copyright (c) 2014, Alan R. Rogers 
 * <rogers@anthro.utah.edu>. This file is released under the Internet
 * Systems Consortium License, which can be found in file "LICENSE".
 */

#ifndef LDPSIZ_JOBQUEUE
#define LDPSIZ_JOBQUEUE

#include "typedefs.h"

JobQueue   *JobQueue_new(int nthreads);
void        JobQueue_addJob(JobQueue * jq, int (*jobfun) (void *),
                            void *param);
void        JobQueue_addTask(JobQueue * jq, int (*taskfun) (void *),
                             void *param);
void        JobQueue_waitOnJobs(JobQueue * jq);
void        JobQueue_free(JobQueue * jq);
#endif
