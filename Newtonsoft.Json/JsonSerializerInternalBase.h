#pragma once

#include "..\Newtonsoft\Json\Serialization\ErrorContext.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Newtonsoft\Json\JsonSerializer.h"
#include "..\Newtonsoft\Json\Serialization\ITraceWriter.h"
#include "..\Newtonsoft\Json\Serialization\JsonSerializerProxy.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class JsonSerializerInternalBase : public Object // 0x0
	{
	public:
		Newtonsoft::Json::Serialization::ErrorContext* _currentErrorContext; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft.Json.Utilities.BidirectionalDictionary<UnityEngine::UnicodeString*,System.Object> _mappings; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		Newtonsoft::Json::JsonSerializer* Serializer; // 0x20 (size: 0x8, flags: 0x23, type: 0x12)
		Newtonsoft::Json::Serialization::ITraceWriter* TraceWriter; // 0x28 (size: 0x8, flags: 0x23, type: 0x12)
		Newtonsoft::Json::Serialization::JsonSerializerProxy* InternalSerializer; // 0x30 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x38
}
