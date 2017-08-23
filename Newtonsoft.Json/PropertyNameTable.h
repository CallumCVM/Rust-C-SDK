#pragma once

#include "..\Newtonsoft\Json\Utilities\PropertyNameTable\Entry.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Utilities
{
	class PropertyNameTable : public Object // 0x0
	{
	public:
		Newtonsoft::Json::Utilities::PropertyNameTable::Entry* _entries; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int _count; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int _mask; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
