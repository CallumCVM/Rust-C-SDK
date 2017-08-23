#pragma once

#include "..\System\Reflection\MemberInfo.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class FixupRecord : public BaseFixupRecord // 0x30
	{
	public:
		System::Reflection::MemberInfo* _member; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
