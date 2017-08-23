#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Configuration
{
{
		namespace Provider
{
	class ProviderBase : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _description; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool alreadyInitialized; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
