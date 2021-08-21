//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ", "/home/mb/.config/dwmblocks/memory_bytes",	5,		0},
	{"", "/home/mb/.config/dwmblocks/memory_percentage",	5,		0},
	{"|  ", "/home/mb/.config/dwmblocks/cpu_percentage",	2,		0},
	{"", "/home/mb/.config/dwmblocks/cpu_bars",	2,		0},
	{"|  ", "/home/mb/.config/dwmblocks/storage",	60,		0},
	/*{"| ",     "/home/mb/.config/dwmblocks/arch_upt",	120,		0},*/
	/*{"| ",     "/home/mb/.config/dwmblocks/kernel",	0,		0},*/
	{"|  ",     "/home/mb/.config/dwmblocks/volume_l",	0,		10},
	{"| ",     "/home/mb/.config/dwmblocks/clock",	15,		0},
	{" ",     "",	                                 0,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
