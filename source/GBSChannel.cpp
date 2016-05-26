/*
 * GBSChannel.cpp
 *
 *  Created on: 12 May 2015
 *      Author: Jamie
 */

#include "Audio/GameBoySounds/GBSChannel.h"
#include "GlobalDefinitions.h"
#include "Audio/GameBoySounds/GBSEngine.h"
#include "Callbacks/Callback.h"
#include "Audio/SoundEngine.h"

namespace Audio
{
	namespace GameBoySounds
	{
		GBSChannel::GBSChannel(GBSEngine* hostEngine, u32 channelID)
		{
			this->channelID = channelID;
			// TODO Auto-generated constructor stub
			for (int i = 0; i < 5; i++)
			{
				tracksIncluded[i] = false;
			}
			address = hostEngine;
			for (int i = 0; i < 2; i++)
			{
				toneTracks[i] = new ToneTrack(i);
			}
			waveTrack = new WaveTrack();
			noiseTrack = new NoiseTrack();
		}

		GBSChannel::~GBSChannel()
		{
			// TODO Auto-generated destructor stub
			for (int i = 0; i < 2; i++)
			{
				delete toneTracks[i];
			}
			delete waveTrack;
			delete noiseTrack;
		}

		bool GBSChannel::Update()
		{
			int count = 0;
			for (int i = 0; i < 2; i++)
			{
				if (tracksIncluded[i])
				{
					if (!tracksIncluded[4])
					{
						toneTracks[i]->Update(tempo, *this);
					}
					count++;
				}
			}
			if (tracksIncluded[2])
			{
				if (!tracksIncluded[4])
				{
					waveTrack->Update(tempo, *this);
				}
				count++;
			}
			if (tracksIncluded[3])
			{
				if (!tracksIncluded[4])
				{
					noiseTrack->Update(tempo, *this);
				}
				count++;
			}
			return count != 0;
		}

		u16* GBSChannel::GetBufferAddress() const
		{
			return address->GetBufferAddress();
		}

		Callbacks::Callback* GBSChannel::GetAssociatedCallback() const
		{
			Callbacks::Callback* callback = 0;
			switch (channelID)
			{
				case 0:
					callback = address->GetSongOnEndFunction();
					break;
				case 1:
					callback = SoundEngine::GetFanfareCallback();
					break;
				case 2:
					callback = address->GetSFXOnEndFunction();
					break;
			}
			return callback;
		}

		void GBSChannel::ExecuteOnEndFunction() const
		{
			Callbacks::Callback* callback = GetAssociatedCallback();
			if (callback)
			{
				callback->DoCallback();
			}
		}

		void GBSChannel::Clear(bool saveCallback)
		{
			for (int i = 0; i < 2; i++)
			{
				toneTracks[i]->Clear();
			}
			waveTrack->Clear();
			noiseTrack->Clear();
			for (int i = 0; i < 5; i++)
			{
				tracksIncluded[i] = false;
			}
			if (!saveCallback)
			{
				Callbacks::Callback* callback = 0;
				switch (channelID)
				{
					case 0:
						callback = address->GetSongOnEndFunction();
						break;
					case 2:
						callback = address->GetSFXOnEndFunction();
						break;
				}
				if (callback)
				{
					delete callback;
				}
			}
		}

		void GBSChannel::StartTrack(GBSTrackHeader* header)
		{
			if (header)
			{
				switch (header->trackType)
				{
				case 0:
					tracksIncluded[0] = true;
					toneTracks[0]->SetNextInstruction(header->songData);
					toneTracks[0]->SetPan(0xFF);
					break;
				case 1:
					tracksIncluded[1] = true;
					toneTracks[1]->SetNextInstruction(header->songData);
					toneTracks[1]->SetPan(0xFF);
					break;
				case 2:
					tracksIncluded[2] = true;
					waveTrack->SetNextInstruction(header->songData);
					waveTrack->SetPan(0xFF);
					SwitchWavePattern(0);
					break;
				case 3:
					tracksIncluded[3] = true;
					noiseTrack->SetNextInstruction(header->songData);
					noiseTrack->SetPan(0xFF);
					break;
				}
				for (int i = 1; i < header->numberOfTracks; i++)
				{
					switch (header->theTracks[i - 1].trackType)
					{
						case 0:
						tracksIncluded[0] = true;
						toneTracks[0]->SetNextInstruction(header->theTracks[i - 1].songData);
						toneTracks[0]->SetPan(0xFF);
						break;
						case 1:
						tracksIncluded[1] = true;
						toneTracks[1]->SetNextInstruction(header->theTracks[i - 1].songData);
						toneTracks[1]->SetPan(0xFF);
						break;
						case 2:
						tracksIncluded[2] = true;
						waveTrack->SetNextInstruction(header->theTracks[i - 1].songData);
						waveTrack->SetPan(0xFF);
						SwitchWavePattern(0);
						break;
						case 3:
						tracksIncluded[3] = true;
						noiseTrack->SetNextInstruction(header->theTracks[i - 1].songData);
						noiseTrack->SetPan(0xFF);
						break;
					}
				}
				tracksIncluded[4] = false;
				tempo = 0x100;
			}
		}

		void GBSChannel::SwitchWavePattern(u8 voiceID) const
		{
			address->SwitchWavePattern(voiceID);
		}
	}
}
