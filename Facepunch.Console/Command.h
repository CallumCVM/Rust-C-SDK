#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Action<ConsoleSystem\Arg>.h"
#include "..\System\Action<ConsoleSystem\Command>.h"

namespace rust 
{
	class Command : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Parent; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* FullName; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		System.Func<UnityEngine::UnicodeString*> GetOveride; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		System.Action<UnityEngine::UnicodeString*> SetOveride; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		System::Action<ConsoleSystem::Arg> Call; // 0x38 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::UnicodeString* Description; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Arguments; // 0x48 (size: 0x8, flags: 0x6, type: 0xe)
		System::Action<ConsoleSystem::Command> OnValueChanged; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		bool Variable; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		bool Saved; // 0x59 (size: 0x1, flags: 0x6, type: 0x2)
		bool ServerAdmin; // 0x5a (size: 0x1, flags: 0x6, type: 0x2)
		bool ServerUser; // 0x5b (size: 0x1, flags: 0x6, type: 0x2)
		bool ClientAdmin; // 0x5c (size: 0x1, flags: 0x6, type: 0x2)
		bool Client; // 0x5d (size: 0x1, flags: 0x6, type: 0x2)
		bool ClientInfo; // 0x5e (size: 0x1, flags: 0x6, type: 0x2)
		bool AllowRunFromServer; // 0x5f (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x60
}
