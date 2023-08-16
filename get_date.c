#include <time.h>
#include <stdio.h>


void get_date( char buffer[11]){

#define SIZE 11 

  time_t curtime;
  struct tm *loctime;

  /* Get the current time.  */
  curtime = time (NULL);

  /* Convert it to local time representation.  */
  loctime = localtime (&curtime);

  strftime (buffer, SIZE, "%m%d-%I%M", loctime);

}

