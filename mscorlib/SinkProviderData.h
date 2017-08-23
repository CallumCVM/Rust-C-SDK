#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Channels
{
	class SinkProviderData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* sinkName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* children; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* properties; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
