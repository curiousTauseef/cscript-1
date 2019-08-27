#!/usr/bin/env bash
#if 0
source cscript_make
#endif

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
   printf("I'm a script.\n");
   system("ls");
   exit(0);
}
