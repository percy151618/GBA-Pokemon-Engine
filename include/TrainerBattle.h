/*
 * TrainerBattle.h
 *
 *  Created on: 23 Jun 2015
 *      Author: Jamie
 */

#ifndef TRAINERBATTLE_H_
#define TRAINERBATTLE_H_

#include "Battles.h"

class TrainerBattle : public BattleScreen
{
protected:
	static TrainerData trainerBattleDataTable[];
public:
	TrainerBattle(const BattleTypeStruct &bts, u32 trainerIDAndInformation, const char* afterText, const u8* afterScript = NULL);
	~TrainerBattle();
	virtual void Update();
};

#endif /* TRAINERBATTLE_H_ */
