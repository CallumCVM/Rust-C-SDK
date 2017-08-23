#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Converters
{
	class XmlNodeConverter : public JsonConverter // 0x0
	{
	public:
		UnityEngine::UnicodeString* <DeserializeRootElementName>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		bool <WriteArrayAttribute>k__BackingField; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool <OmitRootObject>k__BackingField; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
