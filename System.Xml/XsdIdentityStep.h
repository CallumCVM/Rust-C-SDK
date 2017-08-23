#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdIdentityStep : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* NsName; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Namespace; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		bool IsCurrent; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool IsAttribute; // 0x29 (size: 0x1, flags: 0x6, type: 0x2)
		bool IsAnyName; // 0x2a (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
