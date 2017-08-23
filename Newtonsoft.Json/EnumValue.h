#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "T.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Utilities
{
			template <typename T0>
	class EnumValue : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _name; // 0x10 (size: 0x8, flags: 0x21, type: 0xe)
		T _value; // 0x18 (size: 0x8, flags: 0x21, type: 0x13)
	}; // size = 0x20
}
