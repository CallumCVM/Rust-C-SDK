#pragma once

#include "..\Newtonsoft\Json\Linq\JContainer.h"
#include "..\Newtonsoft\Json\Linq\JToken.h"
#include "..\System\Object.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Linq
{
	class JToken : public Object // 0x0
	{
	public:
		Newtonsoft::Json::Linq::JContainer* _parent; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Linq::JToken* _previous; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Linq::JToken* _next; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _annotations; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x30
}
