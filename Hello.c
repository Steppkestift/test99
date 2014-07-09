include <unistd.h>
 
const char HALLOWELT[] = "Hallo Welt!\n";
 
int main(void)
{
    /* write: IEEE Std 1003.1-2008 "POSIX.1-2008" */
    if (write(1, HALLOWELT, sizeof(HALLOWELT)) == sizeof(HALLOWELT))        return EXIT_SUCCESS;
    else
        return EXIT_FAILURE;
}
