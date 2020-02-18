#define COLOUR_BLACK 30
#define COLOUR_RED 31
#define COLOUR_GREEN 32
#define COLOUR_YELLOW 33
#define COLOUR_BLUE 34
#define COLOUR_MAGENTA 35
#define COLOUR_CYAN 36
#define COLOUR_WHITE 37
#define COLOUR_RESET 0

#define COLOUR_BG_BLACK 40
#define COLOUR_BG_RED 41
#define COLOUR_BG_GREEN 42
#define COLOUR_BG_YELLOW 43
#define COLOUR_BG_BLUE 44
#define COLOUR_BG_MAGENTA 45
#define COLOUR_BG_CYAN 46
#define COLOUR_BG_WHITE 47

#define TEXT_DECORATION_PLAIN 0
#define TEXT_DECORATION_BOLD 1
#define TEXT_DECORATION_DIM 2
#define TEXT_DECORATION_ITALIC 3
#define TEXT_DECORATION_UNDERLINE 4
#define TEXT_DECORATION_BLINK 5
#define TEXT_DECORATION_REVERSED 7
#define TEXT_DECORATION_STRIKETHROUGH 9

void ansi_clear();
void ansi_colour(int colour, bool bright = false);
void ansi_decoration(int decoration = TEXT_DECORATION_PLAIN);
void ansi_default();
void ansi_debug();
void ansi_highlight();
void ansi_weak();
void ansi_notice();
void ansi_error();
void ansi_status();
void ansi_test();
void ansi_on();
void ansi_off();
