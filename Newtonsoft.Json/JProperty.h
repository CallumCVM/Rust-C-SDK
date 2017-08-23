#pragma once

#include "..\Newtonsoft\Json\Linq\JProperty\JPropertyList.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Linq
{
	class JProperty : public JContainer // 0x50
	{
	public:
		Newtonsoft::Json::Linq::JProperty::JPropertyList* _content; // 0x50 (size: 0x8, flags: 0x21, type: 0x12)
		UnityEngine::UnicodeString* _name; // 0x58 (size: 0x8, flags: 0x21, type: 0xe)
	}; // size = 0x60
}
