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
	<img alt="Github repo size" src="https://img.shields.io/github/repo-size/KHammerschmidt/42cursus-get_next_line?color=red"/>
	<img alt="Number of lines in code" src="https://img.shields.io/tokei/lines/github/KHammerschmidt/42cursus-get_next_line?color=blueviolet"/>
	<img alt="Languages used in repo" src="https://img.shields.io/github/languages/count/KHammerschmidt/42cursus-get_next_line?color=silver"/>
	<img alt="Top used progamming language" src="https://img.shields.io/github/languages/top/KHammerschmidt/42cursus-get_next_line?color=gold"/>	
</p>

<h3 align="center">
	<a href="-about">About</a>
	<span> · </span>
	<a href="#-usage">Usage</a>
</h3>


## 💡 About the project
<<<<<<< HEAD
> Write a project with maximum of 10 functions under the 42 norminette restrictions, that reads one line from a file descriptor with varying BUFFER_SIZE. Thereby, only one line should be returned and any remains after the newline should be saved for a repetitive function call.
</br>

**Requirements** </br>
- Repeated calls (e.g., using a loop) to your get_next_line() function should let you read the text file pointed to by the file descriptor, one line at a time.</br>
- Your function should return the line that was read. If there is nothing else to read or if an error occurred, it should return NULL.</br>
- Make sure that your function works as expected both when reading a file and when reading from the standard input.</br>
- Please note that the returned line should include the terminating \n character, except if the end of file was reached and does not end with a \n character.</br>
- lseek() is forbidden.</br>
- Global variables are forbidden.</br>
</br>

**Key learning points**
  - Learning about file descriptors and reading from a file
  - Using static variables
</br>

## 🛠️ **Usage**
Compile the project with command ``` make ``` <br/>
To modify the buffer size used by read() adapt the BUFFER_SIZE value n in 
[`Makefile`](./Makefile) ``` CPPFLAGS	:= -D BUFFER_SIZE=n ``` </br>
Project Libft with standard library functions required in root.
</br>
