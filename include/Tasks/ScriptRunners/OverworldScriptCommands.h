/*
 * OverworldScriptCommands.h
 *
 *  Created on: 9 Jul 2015
 *      Author: Jamie
 */

#ifndef INCLUDE_OVERWORLDSCRIPTCOMMANDS_H_
#define INCLUDE_OVERWORLDSCRIPTCOMMANDS_H_

extern u32 NoOperation(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 ScriptSwitch(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 EndOverworldScript(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 ReturnOverworldScript(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CallOverworldScript(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 GotoOverworldScript(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 IfGoto(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 IfCall(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 GotoStandardScript(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CallStandardScript(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 IfGotoStandard(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 IfCallStandard(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetBankValue(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetByte2(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 WriteByteToOffset(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 LoadByteFromPointer(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetFarByte(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CopyScriptBank(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CopyByte(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetVar(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 AddVar(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 AddVarToVar(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SubVar(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SubVarFromVar(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CopyVar(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CopyVarIfValid(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CompareBanks(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CompareBankToByte(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CompareBankToFarByte(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CompareFarByteToBank(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CompareFarByteToByte(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CompareFarByteToFarByte(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CompareVarToValue(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CompareVarToVar(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CallASM(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CallASM2(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 Special(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SpecialWithReturn(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 WaitState(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 PauseOWScript(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetFlag(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 ClearFlag(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CheckFlag(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 ResetVars(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 PlaySound(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CheckSound(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 PlayFanfare(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CheckFanfare(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 PlaySong(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 PlaySong2(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 FadeDefault(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 FadeSong(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 FadeOut(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 FadeInOWScriptVersion(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 GetPlayerPos(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CountPokemon(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CountBoxPokemon(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 AddItem(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 RemoveItem(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CheckItemRoom(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CheckItem(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CheckItemType(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 AddItemToPC(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CheckItemPC(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetupTrainerBattle(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 DoTrainerBattle(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 DoDoubleTrainerBattle(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetTrainerflag(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 ClearTrainerflag(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CheckTrainerflag(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 WaitMessage(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 PrepareMessage(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CloseMessageOnKeyPress(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 WaitKeyPress(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 GivePokemon(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CheckAttack(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 BufferSpecies(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 BufferFirstPokemon(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 BufferPartyPokemon(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 BufferItem(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 BufferMoveName(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 BufferNumber(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 BufferStandard(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 BufferString(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 Random(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 GiveMoney(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 PayMoney(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 GiveMoneyMum(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 PayMoneyMum(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 TransferMoney(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CheckMoney(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetHealingPlace(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CheckGender(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetupWildBattle(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetupDoubleWildBattle(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 DoWildBattle(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetObedience(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 CheckObedience(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetWorldMapflag(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 SetCatchLocation(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 MultiplyVar(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 MultiplyVarByVar(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 DivideVar(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 DivideVarByVar(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 GetTimeOfDay(Tasks::ScriptRunners::ScriptRunner* runner);
extern u32 BufferPluralItem(Tasks::ScriptRunners::ScriptRunner* runner);

#endif /* INCLUDE_OVERWORLDSCRIPTCOMMANDS_H_ */
