Creating, Opening, Closing, Reading, and Writing Files:

Creating a file: To create a file, you can use the open system call in C programming. It allows you to create a new file with a specified name and file permissions. The open function returns a file descriptor that represents the newly created file.
Opening a file: The open system call is also used to open an existing file. You provide the file name and the desired flags to specify the access mode (read-only, write-only, or read-write). The open function returns a file descriptor for the opened file.
Closing a file: The close system call is used to close a file that was previously opened with the open function. Closing a file releases system resources associated with the file and makes the file descriptor available for reuse.
Reading from a file: The read system call allows you to read data from a file into a buffer. You provide the file descriptor, the buffer where the data will be stored, and the number of bytes to read. The read function returns the number of bytes actually read.
Writing to a file: The write system call is used to write data from a buffer to a file. You provide the file descriptor, the buffer containing the data to write, and the number of bytes to write. The write function returns the number of bytes actually written.
File Descriptors:

File descriptors are small non-negative integers that represent open files within a process.
Every process has three standard file descriptors:
stdin (standard input): File descriptor 0. It represents the input source for the process, typically connected to the keyboard.
stdout (standard output): File descriptor 1. It represents the default output destination for the process, typically the console or terminal.
stderr (standard error): File descriptor 2. It represents the default destination for error or diagnostic messages produced by the process.
File descriptors are used to perform I/O operations on files, sockets, pipes, and other input/output resources.
POSIX Names and Purpose of Standard File Descriptors:

stdin (standard input): POSIX name is STDIN_FILENO. It is used for reading input from the user or another process.
stdout (standard output): POSIX name is STDOUT_FILENO. It is used for standard output or normal program output.
stderr (standard error): POSIX name is STDERR_FILENO. It is used for error messages or diagnostic output.
Flags and Permissions:

Flags for the open system call:
O_RDONLY: Open the file in read-only mode.
O_WRONLY: Open the file in write-only mode.
O_RDWR: Open the file in read-write mode.
