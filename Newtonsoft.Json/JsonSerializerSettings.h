#pragma once

#include "..\System\Nullable<Newtonsoft\Json\Formatting>.h"
#include "..\System\Nullable<Newtonsoft\Json\DateFormatHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\DateTimeZoneHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\DateParseHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\FloatFormatHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\FloatParseHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\StringEscapeHandling>.h"
#include "..\System\Globalization\CultureInfo.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Nullable<System\Runtime\Serialization\Formatters\FormatterAssemblyStyle>.h"
#include "..\System\Nullable<Newtonsoft\Json\DefaultValueHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\PreserveReferencesHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\NullValueHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\ObjectCreationHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\MissingMemberHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\ReferenceLoopHandling>.h"
#include "..\System\Nullable<System\Runtime\Serialization\StreamingContext>.h"
#include "..\System\Nullable<Newtonsoft\Json\ConstructorHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\TypeNameHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\MetadataPropertyHandling>.h"
#include "..\System\Collections\Generic\IList<Newtonsoft\Json\JsonConverter>.h"
#include "..\Newtonsoft\Json\Serialization\IContractResolver.h"
#include "..\System\Collections\IEqualityComparer.h"
#include "..\System\Func<Newtonsoft\Json\Serialization\IReferenceResolver>.h"
#include "..\Newtonsoft\Json\Serialization\ITraceWriter.h"
#include "..\System\Runtime\Serialization\SerializationBinder.h"
#include "..\System\EventHandler<Newtonsoft\Json\Serialization\ErrorEventArgs>.h"

namespace Newtonsoft
{
	namespace Json
{
	class JsonSerializerSettings : public Object // 0x0
	{
	public:
		System::Globalization::CultureInfo* _culture; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::UnicodeString* _dateFormatString; // 0x18 (size: 0x8, flags: 0x3, type: 0xe)
		System::Nullable<System::Runtime::Serialization::StreamingContext> _context; // 0x20 (size: 0x18, flags: 0x3, type: 0x15)
		System::Collections::Generic::IList<Newtonsoft::Json::JsonConverter> <Converters>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		Newtonsoft::Json::Serialization::IContractResolver* <ContractResolver>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IEqualityComparer* <EqualityComparer>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Func<Newtonsoft::Json::Serialization::IReferenceResolver> <ReferenceResolverProvider>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		Newtonsoft::Json::Serialization::ITraceWriter* <TraceWriter>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::SerializationBinder* <Binder>k__BackingField; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler<Newtonsoft::Json::Serialization::ErrorEventArgs> <Error>k__BackingField; // 0x68 (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::Formatting> _formatting; // 0x70 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::DateFormatHandling> _dateFormatHandling; // 0x78 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::DateTimeZoneHandling> _dateTimeZoneHandling; // 0x80 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::DateParseHandling> _dateParseHandling; // 0x88 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::FloatFormatHandling> _floatFormatHandling; // 0x90 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::FloatParseHandling> _floatParseHandling; // 0x98 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::StringEscapeHandling> _stringEscapeHandling; // 0xa0 (size: 0x8, flags: 0x3, type: 0x15)
		System.Nullable<bool> _checkAdditionalContent; // 0xa8 (size: 0x2, flags: 0x3, type: 0x15)
		System.Nullable<int> _maxDepth; // 0xac (size: 0x8, flags: 0x3, type: 0x15)
		bool _maxDepthSet; // 0xb4 (size: 0x1, flags: 0x3, type: 0x2)
		bool _dateFormatStringSet; // 0xb5 (size: 0x1, flags: 0x3, type: 0x2)
		System::Nullable<System::Runtime::Serialization::Formatters::FormatterAssemblyStyle> _typeNameAssemblyFormat; // 0xb8 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::DefaultValueHandling> _defaultValueHandling; // 0xc0 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::PreserveReferencesHandling> _preserveReferencesHandling; // 0xc8 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::NullValueHandling> _nullValueHandling; // 0xd0 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::ObjectCreationHandling> _objectCreationHandling; // 0xd8 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::MissingMemberHandling> _missingMemberHandling; // 0xe0 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::ReferenceLoopHandling> _referenceLoopHandling; // 0xe8 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::ConstructorHandling> _constructorHandling; // 0xf0 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::TypeNameHandling> _typeNameHandling; // 0xf8 (size: 0x8, flags: 0x3, type: 0x15)
		System::Nullable<Newtonsoft::Json::MetadataPropertyHandling> _metadataPropertyHandling; // 0x100 (size: 0x8, flags: 0x3, type: 0x15)
	}; // size = 0x108
}
