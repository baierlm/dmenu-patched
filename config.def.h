/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int dmx = 80; /* put dmenu at this x offset */
static int dmy = 50; /* put dmenu at this y offset (measured from the bottom if topbar is 0) */
static unsigned int dmw = 600; /* make dmenu this wide */
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};

static const char background[]      = "#32302f";
static const char foreground[]      = "#ebdbb2";//"#a89984";
static const char selbackground[]   = "#458588";
static const char selforeground[]   = "#ebdbb2";
static const char hlforeground[]    = "#fabd2f";
static const char hlbackground[]    = "#32302f";
static const char hlselbackground[] = "#458588";
static const char hlselforeground[] = "#fabd2f";

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { foreground, background },
	[SchemeNormHighlight] = { hlforeground, hlbackground },
	[SchemeSel] = { selforeground, selbackground },
	[SchemeSelHighlight] = { hlselforeground, hlselbackground },
	[SchemeOut] = { "#32302f", "#8ec07c" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;
