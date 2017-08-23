#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\RuntimeMethodHandle.h"

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
	class CADMethodCallMessage : public CADMessageBase // 0x30
	{
	public:
		UnityEngine::UnicodeString* _uri; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::RuntimeMethodHandle MethodHandle; // 0x38 (size: 0x8, flags: 0x3, type: 0x11)
		UnityEngine::UnicodeString* FullTypeName; // 0x40 (size: 0x8, flags: 0x3, type: 0xe)
	}; // size = 0x48
}
