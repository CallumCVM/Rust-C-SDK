#pragma once

#include "..\UnityEngine\Video\VideoPlayer\EventHandler.h"
#include "..\UnityEngine\Video\VideoPlayer\ErrorEventHandler.h"
#include "..\UnityEngine\Video\VideoPlayer\FrameReadyEventHandler.h"

namespace UnityEngine
{
	namespace Video
{
	class VideoPlayer : public Behaviour // 0x18
	{
	public:
		UnityEngine::Video::VideoPlayer::EventHandler* prepareCompleted; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Video::VideoPlayer::EventHandler* loopPointReached; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Video::VideoPlayer::EventHandler* started; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Video::VideoPlayer::EventHandler* frameDropped; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Video::VideoPlayer::ErrorEventHandler* errorReceived; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Video::VideoPlayer::EventHandler* seekCompleted; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Video::VideoPlayer::FrameReadyEventHandler* frameReady; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x50
}
