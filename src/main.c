#include <stdio.h>
#include "rom.h"
#include "cpu.h"
//#include "gpu.h"
//#include "interrupts.h"


int main(){
	loadROM("/home/phil/work/private/mygb/roms/tetris.gb");

	/**
	 * TODO:
	 * How much memory is needed?
	 * What to do after rom is fully in memory
	 * start building CPU
	 * https://github.com/blazer82/gb.teensy/blob/master/lib/CPU/CPU.h
	 * https://meatfighter.com/gameboy/
	 * https://cturt.github.io/cinoop.html
	 *
	 */
	//struct registers memory[32000];

	//fread(&firstBits[0x8000], sizeof(struct registers), 4000, fptr);
	/*
	 * for(int i = 0; i < 4000; i++){
		struct registers firstBit = firstBits[i];
		printf("%c, %c, %c, %c, %c, %c, %c, %c\n", firstBit.F, firstBit.A, firstBit.C, firstBit.B, firstBit.E, firstBit.D, firstBit.L, firstBit.H);
	}
	fclose(fptr);

	*/
	while(1){
		cpuStep();
		//gpuStep();
		//interruptStep();
	}
	return 0;
}
