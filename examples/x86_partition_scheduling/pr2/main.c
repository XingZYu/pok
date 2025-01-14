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

#include "activity.h"
#include <core/partition.h>
#include <core/thread.h>
#include <libc/stdio.h>
#include <types.h>

int main(void) {
  uint32_t tid;
  static uint32_t counter;
  pok_ret_t ret;
  pok_thread_attr_t tattr;

  printf("[P2] Enter %d\n", counter++);
  tattr.entry = hello_p2t1;

  ret = pok_thread_create(&tid, &tattr);
  printf("[P2] pok_thread_create (1) return=%d\n", ret);

  pok_partition_set_mode(POK_PARTITION_MODE_NORMAL);
  pok_thread_wait_infinite();

  return (0);
}
