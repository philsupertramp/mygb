#pragma once

#include <stdio.h>
#include "registers.h"
#include "memory.h"

typedef struct instruction {
	char *disassembly;
	unsigned char operandLength;
	void *execute;
	//unsigned char ticks;
} instruction;

extern const instruction instructions[256];

static u_char stopped = 0;

void cpuStep(void);
