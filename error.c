#include "global.h"

error(m) /* generates all error */
    char *m;
{
fprintf(stderr, "line %d: %s\n", lineno, m);
exit(1); /* unsuccessful termination */
}
