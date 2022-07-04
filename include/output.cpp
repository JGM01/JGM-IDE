#include "output.hpp"
#include <unistd.h>



void editorRefreshScreen() {
    write(STDOUT_FILENO, "\x1b[2J", 4);
}