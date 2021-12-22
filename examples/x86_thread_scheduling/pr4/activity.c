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

void ping_from(char *name) {
  int count = 0;
  while (1) {
    ++count;
    if (count == 100000) {
      printf("%s: pinging\n", name);
      count = 0;
    }
  }
}

void *hello_p4t1() {
  printf("P4T1: Start Working\n");
  ping_from("P4T1");
}

void *hello_p4t2() {
  printf("P4T2: Start Working\n");
  ping_from("P4T2");
}

void *hello_p4t3() {
  printf("P4T3: Start Working\n");
  ping_from("P4T3");
}
