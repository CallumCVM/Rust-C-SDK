#pragma once

#include "..\System\Type.h"
#include "..\UnityEngine\List.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class JsonPropertyCollection : public KeyedCollection`2 // 0x38
	{
	public:
		System::Type* _type; // 0x38 (size: 0x8, flags: 0x21, type: 0x12)
		UnityEngine::List<Newtonsoft.Json.Serialization.JsonProperty>* _list; // 0x40 (size: 0x8, flags: 0x21, type: 0x15)
	}; // size = 0x48
}
