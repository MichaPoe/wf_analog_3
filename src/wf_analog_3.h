#pragma once
#define WF_ANALOG_H

// #define DEBUG

#define SHOWHOURMARKS
#define SHOWMINUTEMARKS

// resolution: 144 × 168
#define HOURMARKCNT 12
#define HOURMARKDIAMETER 107
#define HOURMARKRADIUS 3
#define MINUTEMARKCNT 60
#define MINUTEMARKDIAMETEROUTER 140
#define MINUTEMARKDIAMETERINNER 120
// dot in the middle
#define CENTERCIRCLEDIAMETER 6
#define CENTERHOLEDIAMETER 4
// handles
//#define WITHNEEDLE
#define HOURHANDWIDTH 4
#define HOURHANDLENGTH 40
#define MINUTEHANDWIDTH 3
#define MINUTEHANDLENGTH 65

// date settings
#define DATEHSPACE 2
#define DATEFONTLOAD RESOURCE_ID_FONT_BLASTER_INFINITE_28
#define DATEFONTSIZE 28

//#define SHOWMONTH
//#define DATEONTOP // geht derzeit nicht, weil die Zeiger dann zu tief sind
//#define DAY2DIGITS
//#define CENTERDATE
#define CENTERDATEEACH

#define min(a,b) \
   ({ __typeof__ (a) _a = (a); \
      __typeof__ (b) _b = (b); \
      _a < _b ? _a : _b; })
#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
      __typeof__ (b) _b = (b); \
      _a > _b ? _a : _b; })
#define sgn0(a) \
   ({ __typeof__ (a) _a = (a); \
      _a < 0 ? -1 : 1; })

static const char *GERMAN_DAYS[] = { "So", "Mo", "Di", "Mi", "Do", "Fr", "Sa" };

static const GPathInfo HOUR_HAND_POINTS = {
#ifdef WITHNEEDLE
	7,
#else
	5,
#endif
	(GPoint []) {
		{ -HOURHANDWIDTH,  0},
		{ -HOURHANDWIDTH, -HOURHANDLENGTH},
#ifdef WITHNEEDLE
		{             -1, -HOURHANDLENGTH - HOURHANDWIDTH / 2},
		{              1, -HOURHANDLENGTH - HOURHANDWIDTH / 2},
#else
#endif
		{  HOURHANDWIDTH, -HOURHANDLENGTH},
		{  HOURHANDWIDTH,  0},
		{ -HOURHANDWIDTH,  0}
	}
};

static const GPathInfo MINUTE_HAND_POINTS = {
#ifdef WITHNEEDLE
	7,
#else
	5,
#endif
	(GPoint []) {
		{ -MINUTEHANDWIDTH,  0},
		{ -MINUTEHANDWIDTH, -MINUTEHANDLENGTH},
#ifdef WITHNEEDLE
		{               -1, -MINUTEHANDLENGTH - MINUTEHANDWIDTH / 2},
		{                1, -MINUTEHANDLENGTH - MINUTEHANDWIDTH / 2},
#else
#endif
		{  MINUTEHANDWIDTH, -MINUTEHANDLENGTH},
		{  MINUTEHANDWIDTH,  0},
		{ -MINUTEHANDWIDTH,  0}
	}
};

