#include "bitfield_t.h"
#include <stdio.h>

void	print_bitfield(	bitfield_t	bitfield	) {

	size_t bitfield_size = sizeof(	bitfield	);
	fprintf(	stdout, "%ld\n", 	bitfield_size	);
}
