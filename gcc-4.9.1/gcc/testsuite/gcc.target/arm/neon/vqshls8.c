/* Test the `vqshls8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vqshls8 (void)
{
  int8x8_t out_int8x8_t;
  int8x8_t arg0_int8x8_t;
  int8x8_t arg1_int8x8_t;

  out_int8x8_t = vqshl_s8 (arg0_int8x8_t, arg1_int8x8_t);
}

/* { dg-final { scan-assembler "vqshl\.s8\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
