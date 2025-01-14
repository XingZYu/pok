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
#include "activity.h"
#include <core/partition.h>
#include <libc/stdio.h>
#include <types.h>

int main() {
  uint32_t tid;
  pok_ret_t ret;
  pok_thread_attr_t tattr;

  tattr.entry = hello_p3t1;
  tattr.weight = 4;

  ret = pok_thread_create(&tid, &tattr);
  printf("[P3] pok_thread_create (1) return=%d\n", ret);

  tattr.entry = hello_p3t2;
  tattr.weight = 3;

  ret = pok_thread_create(&tid, &tattr);
  printf("[P3] pok_thread_create (2) return=%d\n", ret);

  tattr.entry = hello_p3t3;
  tattr.weight = 2;

  ret = pok_thread_create(&tid, &tattr);
  printf("[P3] pok_thread_create (3) return=%d\n", ret);

  pok_partition_set_mode(POK_PARTITION_MODE_NORMAL);
  pok_thread_wait_infinite();

  return (0);
}
