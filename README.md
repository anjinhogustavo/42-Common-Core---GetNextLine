<h1 align="center">
	Get_next_line
</h1>
<div align="center">
	![Image](https://miro.medium.com/v2/resize:fit:828/format:webp/1*FpnSkgmAEmxRlnLBRclqYw.png)
</div>

<p align="center">

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
<br>

<div align="center">
	<img src="(https://github.com/user-attachments/assets/4be0aad2-6b9a-4253-9435-661cce7a4879))">
</div>!

## 🗣️ About

> _This project aims to code a C function that can read multiple lines from a file._

<br>

# Great Resources for Get_next_line

[42-Gitbook](https://42-cursus.gitbook.io/guide)

[Learn C](https://www.learn-c.org/)

[Makefile tutor](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)


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

To compile the function, run:

```shell
$ cd path/to/get-next-line cc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c

```C
#include "get_next_line.h"
```
**3. Running Tests**
```
./gnl < file.txt
```

## 📋 Tester

**Here some third party testers that you can use.**

* [xicodomingues/francinette](https://github.com/xicodomingues/francinette)
* [gnl-station-tester](https://github.com/kodpe/gnl-station-tester)
