#pragma once

#include "..\Newtonsoft\Json\Linq\JToken.h"

namespace rust 
{
	class JPropertyList : public Object // 0x0
	{
	public:
		Newtonsoft::Json::Linq::JToken* _token; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x18
}
