#pragma once

#include "..\Newtonsoft\Json\Linq\JToken.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Linq
{
	class JTokenReader : public JsonReader // 0x70
	{
	public:
		Newtonsoft::Json::Linq::JToken* _root; // 0x70 (size: 0x8, flags: 0x21, type: 0x12)
		UnityEngine::UnicodeString* _initialPath; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		Newtonsoft::Json::Linq::JToken* _parent; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Linq::JToken* _current; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x90
}
