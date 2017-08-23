#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class TypeEntry : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* assembly_name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* type_name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
