/*
 * This file is automagically created from comm.c -- DO NOT EDIT
 */

struct comm
{
  char *name;
  int flags;
#ifdef MULTIUSER
  AclBits userbits[ACL_BITS_PER_CMD];
#endif
};

#define ARGS_MASK	(3)

#define ARGS_0	(0)
#define ARGS_1	(1)
#define ARGS_2	(2)
#define ARGS_3	(3)

#define ARGS_PLUS1	(1<<2)
#define ARGS_PLUS2	(1<<3)
#define ARGS_PLUS3	(1<<4)
#define ARGS_ORMORE	(1<<5)

#define NEED_FORE	(1<<6)	/* this command needs a fore window */
#define NEED_DISPLAY	(1<<7)	/* this command needs a display */
#define NEED_LAYER	(1<<8)	/* this command needs a layer */
#define CAN_QUERY	(1<<9)  /* this command can be queried, i.e. used with -Q to
				   get back a result to stdout */

#define ARGS_01		(ARGS_0 | ARGS_PLUS1)
#define ARGS_02		(ARGS_0 | ARGS_PLUS2)
#define ARGS_12		(ARGS_1 | ARGS_PLUS1)
#define ARGS_23		(ARGS_2 | ARGS_PLUS1)
#define ARGS_24		(ARGS_2 | ARGS_PLUS2)
#define ARGS_34		(ARGS_3 | ARGS_PLUS1)
#define ARGS_012	(ARGS_0 | ARGS_PLUS1 | ARGS_PLUS2)
#define ARGS_0123	(ARGS_0 | ARGS_PLUS1 | ARGS_PLUS2 | ARGS_PLUS3)
#define ARGS_123	(ARGS_1 | ARGS_PLUS1 | ARGS_PLUS2)
#define ARGS_124	(ARGS_1 | ARGS_PLUS1 | ARGS_PLUS3)
#define ARGS_1234	(ARGS_1 | ARGS_PLUS1 | ARGS_PLUS2 | ARGS_PLUS3)

struct action
{
  int nr;
  char **args;
  int *argl;
  int quiet;	/* Suppress (currently unused)
		   0x01 - Error message
		   0x02 - Normal message
		*/
};

#define RC_ILLEGAL -1

#define RC_ACLADD 0
#define RC_ACLCHG 1
#define RC_ACLDEL 2
#define RC_ACLGRP 3
#define RC_ACLUMASK 4
#define RC_ACTIVITY 5
#define RC_ADDACL 6
#define RC_ALLPARTIAL 7
#define RC_ALTSCREEN 8
#define RC_AT 9
#define RC_ATTRCOLOR 10
#define RC_AUTODETACH 11
#define RC_AUTONUKE 12
#define RC_BACKTICK 13
#define RC_BCE 14
#define RC_BELL 15
#define RC_BELL_MSG 16
#define RC_BIND 17
#define RC_BINDKEY 18
#define RC_BLANKER 19
#define RC_BLANKERPRG 20
#define RC_BREAK 21
#define RC_BREAKTYPE 22
#define RC_BUFFERFILE 23
#define RC_C1 24
#define RC_CAPTION 25
#define RC_CHACL 26
#define RC_CHARSET 27
#define RC_CHDIR 28
#define RC_CJKWIDTH 29
#define RC_CLEAR 30
#define RC_COLON 31
#define RC_COMMAND 32
#define RC_COMPACTHIST 33
#define RC_CONSOLE 34
#define RC_COPY 35
#define RC_CRLF 36
#define RC_DEBUG 37
#define RC_DEFAUTONUKE 38
#define RC_DEFBCE 39
#define RC_DEFBREAKTYPE 40
#define RC_DEFC1 41
#define RC_DEFCHARSET 42
#define RC_DEFENCODING 43
#define RC_DEFESCAPE 44
#define RC_DEFFLOW 45
#define RC_DEFGR 46
#define RC_DEFHSTATUS 47
#define RC_DEFKANJI 48
#define RC_DEFLOG 49
#define RC_DEFLOGIN 50
#define RC_DEFMODE 51
#define RC_DEFMONITOR 52
#define RC_DEFMOUSETRACK 53
#define RC_DEFNONBLOCK 54
#define RC_DEFOBUFLIMIT 55
#define RC_DEFSCROLLBACK 56
#define RC_DEFSHELL 57
#define RC_DEFSILENCE 58
#define RC_DEFSLOWPASTE 59
#define RC_DEFUTF8 60
#define RC_DEFWRAP 61
#define RC_DEFWRITELOCK 62
#define RC_DETACH 63
#define RC_DIGRAPH 64
#define RC_DINFO 65
#define RC_DISPLAYS 66
#define RC_DUMPTERMCAP 67
#define RC_ECHO 68
#define RC_ENCODING 69
#define RC_ESCAPE 70
#define RC_EVAL 71
#define RC_EXEC 72
#define RC_FIT 73
#define RC_FLOW 74
#define RC_FOCUS 75
#define RC_FOCUSMINSIZE 76
#define RC_GR 77
#define RC_GROUP 78
#define RC_HARDCOPY 79
#define RC_HARDCOPY_APPEND 80
#define RC_HARDCOPYDIR 81
#define RC_HARDSTATUS 82
#define RC_HEIGHT 83
#define RC_HELP 84
#define RC_HISTORY 85
#define RC_HSTATUS 86
#define RC_IDLE 87
#define RC_IGNORECASE 88
#define RC_INFO 89
#define RC_KANJI 90
#define RC_KILL 91
#define RC_LASTMSG 92
#define RC_LAYOUT 93
#define RC_LICENSE 94
#define RC_LOCKSCREEN 95
#define RC_LOG 96
#define RC_LOGFILE 97
#define RC_LOGIN 98
#define RC_LOGTSTAMP 99
#define RC_MAPDEFAULT 100
#define RC_MAPNOTNEXT 101
#define RC_MAPTIMEOUT 102
#define RC_MARKKEYS 103
#define RC_MAXWIN 104
#define RC_META 105
#define RC_MONITOR 106
#define RC_MOUSETRACK 107
#define RC_MSGMINWAIT 108
#define RC_MSGWAIT 109
#define RC_MULTIUSER 110
#define RC_NETHACK 111
#define RC_NEXT 112
#define RC_NONBLOCK 113
#define RC_NUMBER 114
#define RC_OBUFLIMIT 115
#define RC_ONLY 116
#define RC_OTHER 117
#define RC_PARTIAL 118
#define RC_PASSWORD 119
#define RC_PASTE 120
#define RC_PASTEFONT 121
#define RC_POW_BREAK 122
#define RC_POW_DETACH 123
#define RC_POW_DETACH_MSG 124
#define RC_PREV 125
#define RC_PRINTCMD 126
#define RC_PROCESS 127
#define RC_QUIT 128
#define RC_READBUF 129
#define RC_READREG 130
#define RC_REDISPLAY 131
#define RC_REGISTER 132
#define RC_REMOVE 133
#define RC_REMOVEBUF 134
#define RC_RENDITION 135
#define RC_RESET 136
#define RC_RESIZE 137
#define RC_SCREEN 138
#define RC_SCROLLBACK 139
#define RC_SELECT 140
#define RC_SESSIONNAME 141
#define RC_SETENV 142
#define RC_SETSID 143
#define RC_SHELL 144
#define RC_SHELLTITLE 145
#define RC_SILENCE 146
#define RC_SILENCEWAIT 147
#define RC_SLEEP 148
#define RC_SLOWPASTE 149
#define RC_SORENDITION 150
#define RC_SOURCE 151
#define RC_SPLIT 152
#define RC_STARTUP_MESSAGE 153
#define RC_STUFF 154
#define RC_SU 155
#define RC_SUSPEND 156
#define RC_TERM 157
#define RC_TERMCAP 158
#define RC_TERMCAPINFO 159
#define RC_TERMINFO 160
#define RC_TIME 161
#define RC_TITLE 162
#define RC_UMASK 163
#define RC_UNBINDALL 164
#define RC_UNSETENV 165
#define RC_UTF8 166
#define RC_VBELL 167
#define RC_VBELL_MSG 168
#define RC_VBELLWAIT 169
#define RC_VERBOSE 170
#define RC_VERSION 171
#define RC_WALL 172
#define RC_WIDTH 173
#define RC_WINDOWLIST 174
#define RC_WINDOWS 175
#define RC_WRAP 176
#define RC_WRITEBUF 177
#define RC_WRITELOCK 178
#define RC_XOFF 179
#define RC_XON 180
#define RC_ZMODEM 181
#define RC_ZOMBIE 182

#define RC_LAST 182
