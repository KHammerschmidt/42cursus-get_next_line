# get_next_line

This project is subject to the 42 core curriculum. The subject is to read one line from a file descriptor with a varying BUFFER_SIZE. 
Thereby, only one line should be returned and any remains after the newline should be saved for a repetitive function call.  
The bonus part has been handled by using one one static variable.

Key learning points of this project were:
  - Using static variables

Compile with: gcc -Wall -Werror -Wextra -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c get_next_line.h main.c
