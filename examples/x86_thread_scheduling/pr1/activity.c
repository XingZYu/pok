/*
 *                               POK header
 *
 * The following file is a part of the POK project. Any modification should
 * be made according to the POK licence. You CANNOT use this file or a part
 * of a file for your own project.
 *
 * For more information on the POK licence, please see our LICENCE FILE
 *
 * Please follow the coding guidelines described in doc/CODING_GUIDELINES
 *
 *                                      Copyright (c) 2007-2021 POK team
 */

#include <core/thread.h>
#include <libc/stdio.h>
#include <types.h>

void ping_from(char * name) {
    int count = 0;
    while (1) {
        ++count;
        if (count == 10000000) 
        {
            printf("%s: pinging\n", name);
            count = 0;
        }    
    }
}

void *hello_p1t1() {
    printf("P1T1: Start Working\n");
    /* while (1) { */
    /*     pok_thread_sleep(1000000); */
    /*     printf("P1T1: Working Again\n"); */
    /* } */
    ping_from("P1T1");
}

void *hello_p1t2() {
    pok_thread_sleep(1000000);
    printf("P1T2: Start Working\n");
    /* while (1) { */
    /*     pok_thread_sleep(1000000); */
    /*     printf("P1T2: Working Again\n"); */
    /* } */
    ping_from("P1T2");
}

void *hello_p1t3() {
    pok_thread_sleep(2000000);
    printf("P1T3: Start Working\n");
    /* while (1) { */
    /*     pok_thread_sleep(1000000); */
    /*     printf("P1T3: Working Again\n"); */
    /* } */
    ping_from("P1T3");
}