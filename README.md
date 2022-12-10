<h1 align="center">
  <img  width="90" src="https://user-images.githubusercontent.com/19689770/129336866-169b0dc7-ea41-47d4-b50a-d466508031af.png">
  
	🧰 get_next_line
 </img>

</h1>
</br>

<p align="center">
	<b>Reading a line from a file descriptor</b></br>
	Start date: 09/august/2021 </br>
	<sub> Project status: completed 105/100 points </sub>
</p>

<p align="center">
	<img alt="Github repo size" src="https://img.shields.io/github/repo-size/KHammerschmidt/42cursus-get_next_line?color=red"/>
	<img alt="Number of lines in code" src="https://img.shields.io/tokei/lines/github/KHammerschmidt/42cursus-get_next_line?color=blueviolet"/>
	<img alt="Languages used in repo" src="https://img.shields.io/github/languages/count/KHammerschmidt/42cursus-get_next_line?color=silver"/>
	<img alt="Top used progamming language" src="https://img.shields.io/github/languages/top/KHammerschmidt/42cursus-get_next_line?color=gold"/>	
</p>



## 💡 About the project
> Write a project with maximum of 10 functions under the 42 norminette restrictions, that reads one line from a file descriptor with varying BUFFER_SIZE. Thereby, only one line should be returned and any remains after the newline should be saved for a repetitive function call.
</br>

**Requirements** </br>
- Repeated calls (e.g., using a loop) to get_next_line() function should read the text file pointed to by the file descriptor, one line at a time.</br>
- The function should return the line that was read. If there is nothing else to read or if an error occurred, it should return NULL.</br>
- Function should work as expected both when reading a file and when reading from the standard input.</br>
- The returned line should include the terminating \n character, except if the end of file was reached and does not end with a \n character.</br>
- lseek() is forbidden.</br>
- Global variables are forbidden.</br>
</br>

**Key learning points**
  - Learning about file descriptors and reading from a file
  - Using static variables
</br>

## 🛠️ **Usage**

clone the repository:
```bash
git clone https://github.com/KHammerschmidt/42cursus-get_next_line &&
cd 42cursus-get_next_line &&
git clone https://github.com/KHammerschmidt/42cursus-Libft
```

to modify the buffer size used by read() adapt BUFFERSIZE value n in </br>
[`Makefile`](./Makefile) ``` CPPFLAGS	:= -D BUFFER_SIZE=n ```

to compile the project:
```bash
make
```
</br>
