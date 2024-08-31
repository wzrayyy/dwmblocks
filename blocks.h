static const Block blocks[] = {
//  <i>	   <cmd>                         <int> <sig>
	{"",   "sb-vpn",					 30,   2},
	{"",   "sb-cast",					 30,   1},
	{"",   "sb-battery",				 5,    0},
	{"",   "date +'%a %m/%d %I:%M %P'",  5,    0},
};

static char delim[] = " | ";
static unsigned int delimLen = 5;
