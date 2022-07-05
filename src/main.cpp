#include <terminal.cpp>
#include <output.cpp>
#include <input.cpp>

int main() {
    enableRawMode();

    while (1) {
        editorRefreshScreen();
        editorProcessKeypress();
    }    
    return 0;
}
