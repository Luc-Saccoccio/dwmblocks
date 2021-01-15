//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"",	"music",		0,	11}, */
	/* {"",	"pacpackages",		1,	8}, */
	/* {"",	"news",			0,	6}, */
	/* {"",	"torrent",		20,	7}, */
	{"",	"memory",		10,	14},
	{"",	"cpu",			10,	18},
	{"",	"mailbox",		180,	12},
	{"",	"volume",		0,	10},
	{"",	"battery",		5,	3},
	{"",	"date '+%D at %H:%M'",	60,	1},
	{"",	"internet",		5,	4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "] [";
static unsigned int delimLen = 5;
