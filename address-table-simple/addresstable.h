#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

#define __IP_TABLE_LEN 3
//define __RAND_IDX(max) (int) ((double) rand() * ( (double) max / (double) INT_MAX ))

// the entry of the address table
typedef struct iptab
{
    char ip_addr[15];
    // other infos?
}
iptab_addr_t;

// the table is an 'extern' array of (string) IP addresses
extern iptab_addr_t __ip_table[ __IP_TABLE_LEN ];

// get the total lenght of the table
int iptab_len();

// get the IP address (as string) of a certain node
// return NULL is the address is wrong
char* iptab_getaddr(int n);
