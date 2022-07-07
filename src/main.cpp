#include "terminal.hpp"
#include "output.hpp"
#include "../headers/input.hpp"

void initEditor() {
    
}

int main() {
    enableRawMode();

    while (1) {
        editorRefreshScreen();
        editorProcessKeypress();
    }    
    return 0;
}
