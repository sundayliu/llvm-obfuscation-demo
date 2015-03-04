#include <stdio.h>
#include <stdlib.h>
uint32_t global_value = 0;
void do_asm()
{
/*
    __asm__ __volatile__(
        "add r0,r0,#1"
        );
        */
    
  __asm__ __volatile__ ("mov r0, %[global];"
                        "mov r1, #1;"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        "add r1, r1, #1;" "str r1, [r0];"
                        :
                        :[global] "r" (&global_value)
                        :
                        );
                        
}