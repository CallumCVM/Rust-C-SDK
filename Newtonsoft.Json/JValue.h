#pragma once

#include "..\Newtonsoft\Json\Linq\JTokenType.h"
#include "..\System\Object.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Linq
{
	class JValue : public JToken // 0x30
	{
	public:
		System::Object _value; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
		Newtonsoft::Json::Linq::JTokenType _valueType; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
