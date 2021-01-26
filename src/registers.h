#pragma once
#include "defines.h"

struct registers {
	struct {
		union {
			struct {
				u_char F;
				u_char A;
			};
			u_short AF;
		};
	};
	struct {
		union {
			struct {
				u_char C;
				u_char B;
			};
			u_short BC;
		};
	};
	struct {
		union {
			struct {
				u_char E;
				u_char D;
			};
			u_short DE;
		};
	};
	struct {
		union {
			struct {
				u_char L;
				u_char H;
			};
			u_short HL;
		};
	};
	u_short sp;
	u_short pc;

} extern registers;

