struct bitfield {
  int a : 10;
  int b : 10;
};

typedef struct bitfield  bitfield_t;

void print_bitfield( bitfield_t bitfield );
