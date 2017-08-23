#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Messaging
{
	class Header : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* HeaderNamespace; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		bool MustUnderstand; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::UnicodeString* Name; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		System::Object Value; // 0x28 (size: 0x8, flags: 0x6, type: 0x1c)
	}; // size = 0x30
}
