

#ifndef IMPLANT_H
#define IMPLANT_H

// IPv4 AF_INET Socket
struct socket_address_in {
	short socket_family; // AF_INET
	unsigned short socket_port;
	struct socket_address socket_in_address;
	char socket_zero[8];
};

typedef struct address {
	union {
		struct {
			unsigned char s_b1, s_b2, s_b3, s_b4;
		} S_un_b;

		struct {
			unsigned short s_w1, s_w2;
		} S_un_w;

		unsigned long S_address;
	} S_un;
} IN_ADDR, *PIN_ADDR, FAR *LPIN_ADDR;

struct socket_address {
	unsigned short sa_family;  // Address family, AF_xxx
	char sa_data[14]; // 14 bytes of protocol address
};

#endif // IMPANT_H
