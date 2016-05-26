/*
 * NewGameScreen.h
 *
 *  Created on: 26 May 2015
 *      Author: Jamie
 */

#ifndef INCLUDE_NewGameScreen_H_
#define INCLUDE_NewGameScreen_H_

#include "Scenes/Scene.h"

namespace Scenes
{
	class NewGameScreen : public Scene
	{
	private:
		u32 exitContext;
		u32 menuPosition;
	public:
		NewGameScreen(u32 enterContext);
		~NewGameScreen();
		void Update();
		void OnEnter();
		void OnExit();
		void IncrementMenuPosition() { if (menuPosition < 2) { menuPosition++; } }
		void DecrementMenuPosition() { if (menuPosition > 0) { menuPosition--; } }
		bool SetExitContext(u32 contextGetType = 0);
	};
}

#endif /* INCLUDE_NewGameScreen_H_ */
