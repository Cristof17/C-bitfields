#include "bitfield_t.h"
#include <stdio.h>

void bitfield_print(bitfield_t bitfield_param) {

	size_t  size_bitfield = sizeof(	bitfield );
	fprintf( stdout, "%ld\n", size_bitfield);
}
