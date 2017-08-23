#pragma once

#include "..\Newtonsoft\Json\Linq\JContainer.h"
#include "..\Newtonsoft\Json\Linq\JValue.h"
#include "..\Newtonsoft\Json\Linq\JToken.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Linq
{
	class JTokenWriter : public JsonWriter // 0x60
	{
	public:
		Newtonsoft::Json::Linq::JContainer* _token; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Linq::JContainer* _parent; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Linq::JValue* _value; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Linq::JToken* _current; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x80
}
