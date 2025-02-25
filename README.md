# GET_NEXT_LINE

My 3rd project at 42 Network's Hive Helsinki 🐝

Reading files - one line at a time!

> [!TIP]
> If you're at a 42 school and doing this project: It's genuinely so much better to ask fellow students instead of reading online solutions ✨

---

## Description

This project's about reading files, with each function call returning the next line:  
We read the file in segments until the end of the line, accumulate those to be the line the function will return, and storing any excess content that was read from the following line(s) - for use in this function's next call(s).  
This project was our introduction to file-reading, the concept of buffers, and static variables.

The `_bonus` version supports reading multiple files without overriding eachothers' read buffers.

---

## Usage

> [!NOTE]
> Code was written and tested for Linux (using Hive's Ubuntu iMacs)

> Testing was done using a lot of my own files, plus [gnlTester](https://github.com/Tripouille/gnlTester) & [gnl-station-tester](https://github.com/kodpe/gnl-station-tester)

### Single buffer/file
- Add `#include "[path to get_next_line.h]"` in your program's header file or relevant C files
- Compile by running `clang get_next_line.c get_next_line_utils.c [your program's files]` (optionally adding `-D BUFFER_SIZE=[number]` to override the default size)

### Multiple buffers/files
- Add `#include "[path to get_next_line_bonus.h]"` in your program's header file or relevant C files
- Compile by running `clang get_next_line.c get_next_line_utils.c [your program's files]` (optionally adding the `-D BUFFER_SIZE=[number]` override, and/or `-D FILES_CAPACITY=[number]` to override the default limit of 7)

---

## Credits

- [Eve Keinan](https://github.com/EvAvKein)
