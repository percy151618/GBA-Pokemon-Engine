#include "GlobalDefinitions.h"

#ifndef FLAGS_H
#define FLAGS_H

class Flags
{
private:
	static u8 seenFlags[];
	static u8 caughtFlags[];
	static u8 trainerflags[];
	static u8 mainFlagBank[];
public:
	static u8* FlagDecryption(u32 flagID, u8* ramLocation, u32 upperFlagLimit);
	static bool GetSeenCaughtStatus(u32 pokemonIndex, u32 modeIndex);
	static bool GenericCheckFlag(u32 flagID, u8* flagLocation, u32 upperFlagLimit);
	static bool CheckFlag(u32 flagID);
	static bool CheckTrainerflag(u32 flagID);
	static void GenericSetFlag(u32 flagID, u8* flagLocation, u32 upperFlagLimit);
	static void SetFlag(u32 flagID);
	static void SetTrainerflag(u32 flagID);
	static void GenericClearFlag(u32 flagID, u8* flagLocation, u32 upperFlagLimit);
	static void ClearFlag(u32 flagID);
	static void ClearTrainerflag(u32 flagID);
};

#endif