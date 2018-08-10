#include <stdio.h>

#define GEN_FORMAT_RESET	"0"
#define GEN_FORMAT_BRIGHT	"1"
#define GEN_FORMAT_DIM		"2"
#define GEN_FORMAT_UNDERSCORE	"3"
#define GEN_FORMAT_BLINK	"4"
#define GEN_FORMAT_REVERSE	"5"
#define GEN_FORMAT_HIDDEN	"6"

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

#define BACKGROUND_COL_BLACK	"40"
#define BACKGROUND_COL_RED	"41"
#define BACKGROUND_COL_GREEN	"42"
#define BACKGROUND_COL_YELLOW	"43"
#define BACKGROUND_COL_BLUE	"44"
#define BACKGROUND_COL_MAGENTA	"45"
#define BACKGROUND_COL_CYAN	"46"
#define BACKGROUND_COL_WHITE	"47"

#define SHELL_COLOR_ESCAPE_SEQ(X) "\x1b["X"m"
#define SHELL_FORMAT_RESET SHELL_COLOR_ESCAPE_SEQ(GEN_FORMAT_RESET)
int main()
{
	//printf("\033[6;3H");
	printf("%sred\n", KRED);
	printf("%sgreen\n", KGRN);
	printf("%syellow\n", KYEL);
	printf("%sblue\n", KBLU);
	printf("%smagenta\n", KMAG);
	printf("%scyan\n", KCYN);
	printf("%swhite\n", KWHT);
	printf("%snormal\n", KNRM);
	printf("%sHello Color\n",SHELL_COLOR_ESCAPE_SEQ(GEN_FORMAT_DIM";"BACKGROUND_COL_WHITE));
}
