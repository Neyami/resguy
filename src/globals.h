#pragma once
#include "util.h"

// all valid file extensions (should include everything FMOD supports)
#define NUM_SOUND_EXTS 22
#define NUM_VALID_EXTS (11 + NUM_SOUND_EXTS)
static const char * g_valid_exts[NUM_VALID_EXTS] = {
	// sound files
	"aiff", "asf", "asx", "dls", "flac", 
	"fsb", "it", "m3u", "midi", "mid", 
	"mod", "mp2", "pls", "s3m", "vag", 
	"wax", "wma", "xm", "wav", "ogg", 
	"mp3", "au",

	// everything else
	"mdl", "spr", "res", "txt", "tga", 
	"bmp", "conf", "gmr", "gsr", "wad", 
	"as"
};