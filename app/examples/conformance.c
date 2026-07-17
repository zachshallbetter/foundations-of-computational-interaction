#include "cis.h"

#include <inttypes.h>
#include <stdio.h>

/*
 * CIS-EX-002 — Door State Conformance Vectors
 *
 * Enumerates the four states shared by the C fixture and interactive example,
 * then emits their canonical integer-encoding hashes. The vectors identify
 * representation drift between the freestanding substrate and experiential
 * model. See examples/README.md for the complete contract.
 */

int main(void)
{
    CisState state = {{0, 0}, 2};
    uint8_t position;
    uint8_t locked;
    puts("position\tlocked\thash");
    for (position = 0u; position <= 1u; ++position) {
        for (locked = 0u; locked <= 1u; ++locked) {
            state.values[0] = position;
            state.values[1] = locked;
            printf("%u\t%u\t%" PRIu64 "\n", position, locked,
                   cis_state_hash(&state));
        }
    }
    return 0;
}
