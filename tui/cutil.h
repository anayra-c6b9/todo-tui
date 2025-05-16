#ifndef CUTIL_H
#define CUTIL_H

typedef struct WinSize {
    int row_size;
    int col_size;
} WinSize;

void get_terminal_size(WinSize *win);

#endif
