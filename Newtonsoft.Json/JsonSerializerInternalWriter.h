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
	class JsonSerializerInternalWriter : public JsonSerializerInternalBase // 0x38
	{
	public:
		System::Type* _rootType; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<System.Object>* _serializeStack; // 0x40 (size: 0x8, flags: 0x21, type: 0x15)
		int _rootLevel; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
