#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class ObjectHandle : public MarshalByRefObject // 0x18
	{
	public:
		System::Object _wrapped; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x20
}
