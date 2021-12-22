#ifndef __POK_KERNEL_GENERATED_DEPLOYMENT_H_
#define __POK_KERNEL_GENERATED_DEPLOYMENT_H_

#define POK_NEEDS_DEBUG 1
/* #define POK_NEEDS_VERBOSE_DEBUG 1 */
#define POK_NEEDS_TIME 1

#define POK_NEEDS_THREADS 1
#define POK_NEEDS_PARTITIONS 1
#define POK_NEEDS_SCHED 1

#define POK_CONFIG_NB_PROCESSORS 1
#define POK_CONFIG_PROCESSOR_AFFINITY                                          \
  { 1, 1, 1, 1 }

/* the macros added for partitions scheduling */
#define POK_NEEDS_PARTITIONS_SCHED 1

/* Use different partition schedulers */
#define POK_PARTITIONS_SCHED_TYPE POK_SCHED_FP
/* #define POK_PARTITIONS_SCHED_TYPE POK_SCHED_EDF */
/* #define POK_PARTITIONS_SCHED_TYPE POK_SCHED_RR */
/* #define POK_PARTITIONS_SCHED_TYPE POK_SCHED_WRR */

#define POK_PARTITIONS_SCHED_TIME_SLICE 20

#define POK_NEEDS_SCHED_FP 1

#define POK_CONFIG_PARTITIONS_SCHEDULER                          \
    {                                                            \
        POK_SCHED_FP, POK_SCHED_FP, POK_SCHED_FP,                \
        POK_SCHED_FP                                             \
    }

#define POK_CONFIG_NB_THREADS 10
#define POK_CONFIG_NB_PARTITIONS 4
// #define MLFQ_QUEUE_NB 3

#define POK_CONFIG_PARTITIONS_SIZE {120 * 1024, 120 * 1024, 120 * 1024, 120 * 1024};
#define POK_CONFIG_PROGRAM_NAME {"pr1/pr1.elf" "pr2/pr2.elf", "pr3/pr3.elf", "pr4/pr4.elf"};

#define POK_CONFIG_SCHEDULING_SLOTS \
    {                               \
        12, 14, 16, 18              \
    }
#define POK_CONFIG_SCHEDULING_MAJOR_FRAME 60
#define POK_CONFIG_SCHEDULING_SLOTS_ALLOCATION \
    {                                          \
        0, 1, 2, 3                             \
    }
#define POK_CONFIG_SCHEDULING_NBSLOTS 4

/* the macros added for partitions scheduling */
#define POK_CONFIG_PARTITIONS_PRIORITY \
    {                                  \
        43, 42, 41, 40                 \
    }
#define POK_CONFIG_PARTITIONS_PERIOD \
    {                                \
        30, 40, 50, 60               \
    }
#define POK_CONFIG_PARTITIONS_DEADLINE \
    {                                  \
        30, 20, 40, 50                 \
    }
#define POK_CONFIG_PARTITIONS_WEIGHT \
    {                                \
        1, 2, 3, 4                   \
    }

#define POK_CONFIG_PARTITIONS_NTHREADS \
    {                                  \
        2, 2, 2, 2                     \
    }
#endif
