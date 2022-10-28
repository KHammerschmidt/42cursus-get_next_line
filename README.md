<h1 align="center">
  <img  width="90" src="https://user-images.githubusercontent.com/19689770/129336866-169b0dc7-ea41-47d4-b50a-d466508031af.png">
  
	🧰 get_next_line
 </img>
	<sub><sub>Project status</sub></sub></br>
	<sub><a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl9mxvq9700780hl4msqc8saj/project/2284509" alt="khammers's 42 get_next_line Score" /></a></sub></br>
</h1>
</br>

<p align="center">
	<b>Reading a line from a file descriptor</b></br>
	Start date: 09/august/2021 </br>
</p>

<p align="center">
	<img alt="Github code size in bytes" src="https://img.shields.io/github/languages/code-size/KHammerschmidt/42cursus-ft_printf"/>
	<img alt="Github repo size" src="https://img.shields.io/github/repo-size/KHammerschmidt/42cursus-ft_printf?color=orange"/>
	<img alt="Languages used in repo" src="https://img.shields.io/github/languages/count/KHammerschmidt/42cursus-ft_printf?color=red&label=languages%20used%20in%20repo"/>
	<img alt="Top used progamming language" src="https://img.shields.io/github/languages/top/KHammerschmidt/42cursus-ft_printf?color=yellow"/>	
</p>

<h3 align="center">
	<a href="-about">About</a>
	<span> · </span>
	<a href="#-usage">Usage</a>
</h3>


## 💡 About the project
> Write a project with maximum of 10 functions under the 42 norminette restrictions, that reads one line from a file descriptor with varying BUFFER_SIZE. Thereby, only one line should be returned and any remains after the newline should be saved for a repetitive function call.
</br>

**Requirements** </br>
• Repeated calls (e.g., using a loop) to your get_next_line() function should let you read the text file pointed to by the file descriptor, one line at a time.
• Your function should return the line that was read. If there is nothing else to read or if an error occurred, it should return NULL.
• Make sure that your function works as expected both when reading a file and when reading from the standard input.
• Please note that the returned line should include the terminating \n character, except if the end of file was reached and does not end with a \n character.
• lseek() is forbidden.
• Global variables are forbidden.

• You will compile your code as follows (a buffer size of 42 is used as an example): cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
• We consider that get_next_line() has an undefined behavior if the file pointed to by the file descriptor changed since the last call whereas read() didn’t reach the end of file.
• We also consider that get_next_line() has an undefined behavior when reading a binary file. However, you can implement a logical way to handle this behavior if you want to.

• Because you will have to read files in get_next_line(), add this option to your compiler call: -D BUFFER_SIZE=n
It will define the buffer size for read().
The buffer size value will be modified by your peer-evaluators and the Moulinette in order to test your code.

**Key learning points**
  - Learning about file descriptors and reading from a file
  - Using static variables
</br>

## 🛠️ **Usage**
To compile the project use the command ``` make ``` <br/>
To change the BUFFER_SIZE of read() adapt the BUFFER_SIZE value n in [`Makefile`](./Makefile)
``` CPPFLAGS		:=		-D BUFFER_SIZE=n ```
Project Libft with standard library functions required in root.


---
