#include "shell.h"

bool file_status(char *path, struct stat *bufstat)
{


        int return_stat;

        return_stat = stat(&path, &bufstat);

        if (return_stat == 0)
        {
                return (true);
        }

        return (false);
}

~                                                                                                                                                                                          
~      
