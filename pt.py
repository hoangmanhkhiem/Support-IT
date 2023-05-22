import curses

def print_menu(stdscr, selected_row_idx):
    stdscr.clear()
    h, w = stdscr.getmaxyx()

    menu = ["Mục 1", "Mục 2", "Mục 3", "Mục 4", "Mục 5", "Mục 6", "Mục 7", "Mục 8", "Mục 9", "Mục 10"]

    for idx, item in enumerate(menu):
        x = w // 2 - len(item) // 2
        y = h // 2 - len(menu) // 2 + idx
        if idx == selected_row_idx:
            stdscr.attron(curses.A_REVERSE)
            stdscr.addstr(y, x, item)
            stdscr.attroff(curses.A_REVERSE)
        else:
            stdscr.addstr(y, x, item)

    stdscr.refresh()

def main(stdscr):
    curses.curs_set(0)
    curses.init_pair(1, curses.COLOR_CYAN, curses.COLOR_BLACK)
    stdscr.bkgd(' ', curses.color_pair(1))

    current_row_idx = 0

    print_menu(stdscr, current_row_idx)

    while True:
        key = stdscr.getch()

        if key == curses.KEY_UP and current_row_idx > 0:
            current_row_idx -= 1
        elif key == curses.KEY_DOWN and current_row_idx < len(menu) - 1:
            current_row_idx += 1
        elif key == curses.KEY_ENTER or key in [10, 13]:
            stdscr.clear()
            stdscr.addstr(0, 0, "Bạn đã chọn: " + menu[current_row_idx])
            stdscr.refresh()
            stdscr.getch()
            break

        print_menu(stdscr, current_row_idx)

curses.wrapper(main)
