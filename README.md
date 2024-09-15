<h1 align="center">
	Get_next_line
</h1>

<p align="center">
	<b><i>Reading a line on a fd is way too tedious</i></b><br>
</p>

<p align="center">
  <img src="https://miro.medium.com/v2/resize:fit:828/format:webp/1*FpnSkgmAEmxRlnLBRclqYw.png" alt="Image">
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#-index">Index</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---
<be>

<div align="center">
	<img src="https://user-images.githubusercontent.com/101434516/202159991-adaddef4-8289-4e32-8fe2-c447b73e665e.png">
</div>

<div align="center">
	*| [Get_Next_Line]((https://github.com/anjinhogustavo/42-Common-Core---GetNextLine/blob/main/get_next_line.c)) |<img src="https://img.shields.io/badge/112%20%2F%20100-success"/>| `3 peers` `30 mins` `moulinette` |
</div>

## 📝 About 

> _This project is about programming a function that allows you to read content line by line. This is done by returning a line read from a file descriptor.
<br>

# 📚 Great Resources for Get_next_line 

[42-Gitbook](https://42-cursus.gitbook.io/guide)

[Learn C](https://www.learn-c.org/)

[Makefile tutor](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)

# 🎥 Videos 

[Oceano - Get_Next_Line](https://www.youtube.com/watch?v=8E9siq7apUU&pp=ygUQZ2V0IG5leHQgbGluZSA0Mg%3D%3D>)

[Nikito - Understanding Get_Next_Line](https://www.youtube.com/watch?v=-Mt2FdJjVno&pp=ygUQZ2V0IG5leHQgbGluZSA0Mg%3D%3D)



	🚀 This project consists of coding basic C functions (see below), which are then compiled
	into a library for use in other cursus projects.

 
## 🛠️ Usage

### Requirements

The Get-next-line is written in C language and thus needs the **`gcc` compiler** to run.

### Instructions

**1. Project Structure**
```
├── get_next_line.c        # Main function to read a line from a file descriptor
├── get_next_line.h        # Header file with function prototypes
├── get_next_line_utils.c  # Utility functions (e.g., string manipulation)
├── Makefile               # Makefile to compile the project easily
└── README.md              # Project description
```
**2. Compiling the Get-next-line**

To compile the function:

```shell
$ cd path/to/get-next-line cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c
```

```C
#include "get_next_line.h"
```

**3. Running Tests**
```
./gnl file.txt
```

## 📋 Tester

**Here testers that you can use.**

* [xicodomingues/francinette](https://github.com/xicodomingues/francinette)
* [gnl-station-tester](https://github.com/kodpe/gnl-station-tester)
* [Tripouille/gnltester](https://github.com/Tripouille/gnlTester)
