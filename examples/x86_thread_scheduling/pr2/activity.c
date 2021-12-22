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

void *hello_p2t1() {
    printf("P2T1: Start Working\n");
    ping_from("P2T1");
}

void *hello_p2t2() {
    printf("P2T2: Start Working\n");
    ping_from("P2T2");
}

void *hello_p2t3() {
    printf("P2T3: Start Working\n");
    ping_from("P2T3");
}
