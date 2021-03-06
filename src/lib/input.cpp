#include <input.hpp>
#include <terminal.hpp>
#include <defines.hpp>

#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

char editorReadKey() {
    int nread;
    char c;
    while ((nread = read(STDIN_FILENO, &c, 1)) != 1) {
        if (nread == -1 && errno != EAGAIN) die("read");
    }
    return c;
    
}

void editorProcessKeypress() {
    char c = editorReadKey();
    switch (c) {
        case CTRL_KEY('q'):
            exit(0);
            break;
  }
}