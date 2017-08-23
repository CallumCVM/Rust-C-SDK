#pragma once

#include "..\EasyAntiCheat\Client\LoadInfo.h"
#include "..\System\Threading\EventWaitHandle.h"
#include "..\EasyAntiCheat\Client\ThreadSynchronizer.h"
#include "..\EasyAntiCheat\Client\LoadResult.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\EventHandler<EasyAntiCheat\Client\LoadCompletedEventArgs>.h"
#include "..\System\EventHandler<EasyAntiCheat\Client\LoadProgressEventArgs>.h"

namespace EasyAntiCheat
{
	namespace Client
{
	class GameLauncher : public Object // 0x0
	{
	public:
		EasyAntiCheat::Client::LoadInfo* loadInfo; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Threading::EventWaitHandle* waitHandle; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		EasyAntiCheat::Client::ThreadSynchronizer* eventContext; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
		UnityEngine::UnicodeString* LoadResultMsg; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::EventHandler<EasyAntiCheat::Client::LoadCompletedEventArgs> Completed; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<EasyAntiCheat::Client::LoadProgressEventArgs> Progress; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		EasyAntiCheat::Client::LoadResult LoadResultCode; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
		bool LoadCancelled; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
		int DisposedRef; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
