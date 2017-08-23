#pragma once

#include "..\Newtonsoft\Json\TypeNameHandling.h"
#include "..\System\Runtime\Serialization\Formatters\FormatterAssemblyStyle.h"
#include "..\Newtonsoft\Json\PreserveReferencesHandling.h"
#include "..\Newtonsoft\Json\ReferenceLoopHandling.h"
#include "..\Newtonsoft\Json\MissingMemberHandling.h"
#include "..\Newtonsoft\Json\ObjectCreationHandling.h"
#include "..\Newtonsoft\Json\NullValueHandling.h"
#include "..\Newtonsoft\Json\DefaultValueHandling.h"
#include "..\Newtonsoft\Json\ConstructorHandling.h"
#include "..\Newtonsoft\Json\MetadataPropertyHandling.h"
#include "..\Newtonsoft\Json\JsonConverterCollection.h"
#include "..\Newtonsoft\Json\Serialization\IContractResolver.h"
#include "..\Newtonsoft\Json\Serialization\ITraceWriter.h"
#include "..\System\Collections\IEqualityComparer.h"
#include "..\System\Runtime\Serialization\SerializationBinder.h"
#include "..\System\Runtime\Serialization\StreamingContext.h"
#include "..\Newtonsoft\Json\Serialization\IReferenceResolver.h"
#include "..\System\Nullable<Newtonsoft\Json\Formatting>.h"
#include "..\System\Nullable<Newtonsoft\Json\DateFormatHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\DateTimeZoneHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\DateParseHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\FloatFormatHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\FloatParseHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\StringEscapeHandling>.h"
#include "..\System\Globalization\CultureInfo.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\EventHandler<Newtonsoft\Json\Serialization\ErrorEventArgs>.h"

namespace Newtonsoft
{
	namespace Json
{
	class JsonSerializer : public Object // 0x0
	{
	public:
		Newtonsoft::Json::JsonConverterCollection* _converters; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		Newtonsoft::Json::Serialization::IContractResolver* _contractResolver; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		Newtonsoft::Json::Serialization::ITraceWriter* _traceWriter; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		System::Collections::IEqualityComparer* _equalityComparer; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		System::Runtime::Serialization::SerializationBinder* _binder; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		System::Runtime::Serialization::StreamingContext _context; // 0x38 (size: 0x10, flags: 0x3, type: 0x11)
		Newtonsoft::Json::Serialization::IReferenceResolver* _referenceResolver; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Globalization::CultureInfo* _culture; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _dateFormatString; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		System::EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs> Error; // 0x60 (size: 0x8, flags: 0x1, type: 0x15)
		Newtonsoft::Json::TypeNameHandling _typeNameHandling; // 0x68 (size: 0x4, flags: 0x3, type: 0x11)
		System::Runtime::Serialization::Formatters::FormatterAssemblyStyle _typeNameAssemblyFormat; // 0x6c (size: 0x4, flags: 0x3, type: 0x11)
		Newtonsoft::Json::PreserveReferencesHandling _preserveReferencesHandling; // 0x70 (size: 0x4, flags: 0x3, type: 0x11)
		Newtonsoft::Json::ReferenceLoopHandling _referenceLoopHandling; // 0x74 (size: 0x4, flags: 0x3, type: 0x11)
		Newtonsoft::Json::MissingMemberHandling _missingMemberHandling; // 0x78 (size: 0x4, flags: 0x3, type: 0x11)
		Newtonsoft::Json::ObjectCreationHandling _objectCreationHandling; // 0x7c (size: 0x4, flags: 0x3, type: 0x11)
		Newtonsoft::Json::NullValueHandling _nullValueHandling; // 0x80 (size: 0x4, flags: 0x3, type: 0x11)
		Newtonsoft::Json::DefaultValueHandling _defaultValueHandling; // 0x84 (size: 0x4, flags: 0x3, type: 0x11)
		Newtonsoft::Json::ConstructorHandling _constructorHandling; // 0x88 (size: 0x4, flags: 0x3, type: 0x11)
		Newtonsoft::Json::MetadataPropertyHandling _metadataPropertyHandling; // 0x8c (size: 0x4, flags: 0x3, type: 0x11)
		System::Nullable<Newtonsoft::Json::Formatting> _formatting; // 0x90 (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::DateFormatHandling> _dateFormatHandling; // 0x98 (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::DateTimeZoneHandling> _dateTimeZoneHandling; // 0xa0 (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::DateParseHandling> _dateParseHandling; // 0xa8 (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::FloatFormatHandling> _floatFormatHandling; // 0xb0 (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::FloatParseHandling> _floatParseHandling; // 0xb8 (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::StringEscapeHandling> _stringEscapeHandling; // 0xc0 (size: 0x8, flags: 0x1, type: 0x15)
		System.Nullable<int> _maxDepth; // 0xc8 (size: 0x8, flags: 0x1, type: 0x15)
		bool _maxDepthSet; // 0xd0 (size: 0x1, flags: 0x1, type: 0x2)
		System.Nullable<bool> _checkAdditionalContent; // 0xd1 (size: 0x2, flags: 0x1, type: 0x15)
		bool _dateFormatStringSet; // 0xd3 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xd8
}
