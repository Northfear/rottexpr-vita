/*
Copyright (C) 1994-1995  Apogee Software, Ltd.
Copyright (C) 2002-2015  icculus.org, GNU/Linux port
Copyright (C) 2017-2018  Steven LeVesque

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef _rt_cfg_public
#define _rt_cfg_public

//****************************************************************************
//
// Public header for RT_CFG.C
//
//****************************************************************************


//****************************************************************************
//
// GLOBALS
//
//****************************************************************************

extern int     FXMode;
extern int     MusicMode;
extern int     MUvolume;
extern int     FXvolume;
extern boolean mouseenabled;
extern boolean joystickenabled;
extern boolean joypadenabled;
extern boolean allowBlitzMoreMissileWeps;
extern boolean enableAmmoPickups;
extern boolean autoAimMissileWeps;
extern boolean autoAim;

extern int     joystickport;
extern int     mouseadjustment;
extern int     threshold;
extern int     NumVoices;
extern int     NumChannels;
extern int     NumBits;
extern boolean stereoreversed;
extern boolean AutoDetailOn;
extern int     DoubleClickSpeed;
extern int     fulllight;
extern boolean BobbinOn;
extern int     Menuflipspeed;
extern int     DetailLevel;
extern int     fandc;
extern int     blanktime;
extern char    CodeName[9];
extern char   ApogeePath[256];

extern int     DefaultDifficulty;
extern int     DefaultPlayerCharacter;
extern int     DefaultPlayerColor;
extern byte    passwordstring[20];

#ifdef VITA
extern boolean gyro_aiming;
extern int     controller_speed;
extern int     gyro_speed;
#endif

typedef struct
{
    char * path;
    boolean avail;
    char * file;
} AlternateInformation;

extern AlternateInformation RemoteSounds;
extern AlternateInformation PlayerGraphics;
extern AlternateInformation GameLevels;
extern AlternateInformation BattleLevels;

#define MAXMACROLENGTH 32
#define MAXMACROS      10

typedef struct {
    byte avail;
    char macro[MAXMACROLENGTH+1];
} MacroList;

extern MacroList CommbatMacros[MAXMACROS];

//****************************************************************************
//
// PROTOTYPES
//
//****************************************************************************

void WriteBattleConfig(void);
void ReadScores (void);
void ReadInt (const char * s1, int * val);
void ReadBoolean (const char * s1, boolean * val);
void ReadConfig (void);
void WriteParameter (int file, const char * s1, int val);
void WriteScores (void);
void WriteConfig (void);
void ReadSETUPFiles (void);
void DeleteSoundFile ( void );
void CheckVendor (void);
void ConvertStringToPasswordString ( char * string );
void ConvertPasswordStringToPassword ( void );
void ConvertPasswordStringToString ( char * string );
void ConvertPasswordToPasswordString ( void );

#endif
