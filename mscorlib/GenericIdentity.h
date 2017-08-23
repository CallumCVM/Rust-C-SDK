#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Principal
{
	class GenericIdentity : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_type; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
