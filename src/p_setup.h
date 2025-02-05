/*
========================================================================

                           D O O M  R e t r o
         The classic, refined DOOM source port. For Windows PC.

========================================================================

  Copyright © 1993-2022 by id Software LLC, a ZeniMax Media company.
  Copyright © 2013-2022 by Brad Harding <mailto:brad@doomretro.com>.

  DOOM Retro is a fork of Chocolate DOOM. For a list of credits, see
  <https://github.com/bradharding/doomretro/wiki/CREDITS>.

  This file is a part of DOOM Retro.

  DOOM Retro is free software: you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by the
  Free Software Foundation, either version 3 of the license, or (at your
  option) any later version.

  DOOM Retro is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with DOOM Retro. If not, see <https://www.gnu.org/licenses/>.

  DOOM is a registered trademark of id Software LLC, a ZeniMax Media
  company, in the US and/or other countries, and is used without
  permission. All other trademarks are the property of their respective
  holders. DOOM Retro is in no way affiliated with nor endorsed by
  id Software.

========================================================================
*/

#pragma once

extern bool         canmodify;
extern bool         samelevel;
extern bool         skipblstart;
extern const char   *linespecials[];

extern bool         allowmonstertelefrags;
extern bool         compat_corpsegibs;
extern bool         compat_light;
extern bool         compat_limitpain;
extern bool         nograduallighting;

extern char         mapnum[6];
extern char         maptitle[256];
extern char         mapnumandtitle[512];
extern char         automaptitle[512];

void P_SetupLevel(int ep, int map);
void P_MapName(int ep, int map);

// Called by startup code.
void P_Init(void);

char *P_GetMapAuthor(int map);
char *P_GetInterBackrop(int map);
int P_GetInterMusic(int map);
char *P_GetInterText(int map);
char *P_GetInterSecretText(int map);
bool P_GetMapEndBunny(int map);
bool P_GetMapEndCast(int map);
bool P_GetMapEndGame(int map);
int P_GetMapEndPic(int map);
int P_GetMapEnterPic(int map);
void P_GetMapLiquids(int map);
int P_GetMapMusic(int map);
char *P_GetMapMusicComposer(int map);
char *P_GetMapMusicTitle(int map);
char *P_GetMapName(int map);
int P_GetMapNext(int map);
bool P_GetMapNoJump(int map);
void P_GetMapNoLiquids(int map);
bool P_GetMapNoMouselook(int map);
int P_GetMapPar(int map);
bool P_GetMapPistolStart(int map);
int P_GetMapSecretNext(int map);
int P_GetMapSky1Texture(int map);
int P_GetMapSky1ScrollDelta(int map);
int P_GetMapTitlePatch(int map);
