#
#             _       _    __  
#            (_)     | |  / _| 
#  _ __  _ __ _ _ __ | |_| |_  
# | '_ \| '__| | '_ \| __|  _| 
# | |_) | |  | | | | | |_| |   
# | .__/|_|  |_|_| |_|\__|_|   
# | |                          
# |_|                          
---

Here you will fine a function that represents a similar methodology for showing outputs of data at some runtime in C language

## Files
---
| File | Description |
| ---- | ------- |
| _printf.c | first inlet of arguments evaluation  |
| _case_c | function that evaluates which format its going to be used |
| _cases_num.c , _cases_lis.c | Auxiliar functions for integers and string formats |
| holberton.h | header file that contains prototypes functions |
| _putchar.c  | function that improves output from a system call to wirte data out of buffer |


## Compilation 
First compile all projects with a main program that allows to check cases
```sh 
$gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c holberton.h -o <nameofexecutable>
Besides that execute it for seein the output at shell
$./"nameofexecutable"

---

## Authors
---
[Liliana Ospina](https://github.com/Liliana327)
[Juan Calle](https://github.com/johnconnor77)