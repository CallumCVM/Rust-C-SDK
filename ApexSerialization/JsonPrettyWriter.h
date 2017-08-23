#pragma once

#include "..\System\Text\StringBuilder.h"

namespace Apex
{
	namespace Serialization
{
{
		namespace Json
{
	class JsonPrettyWriter : public Object // 0x0
	{
	public:
		System::Text::StringBuilder* _b; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int _depth; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		bool _indent; // 0x1c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
