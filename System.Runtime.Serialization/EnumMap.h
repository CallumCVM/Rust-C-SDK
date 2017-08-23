#pragma once

#include "..\UnityEngine\List.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class EnumMap : public SerializationMap // 0x48
	{
	public:
		UnityEngine::List<System.Runtime.Serialization.EnumMemberInfo>* enum_members; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		bool flag_attr; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
