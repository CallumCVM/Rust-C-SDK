#pragma once

#include "..\System\Runtime\Remoting\Metadata\SoapOption.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Runtime\Remoting\Metadata\XmlFieldOrderOption.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Metadata
{
	class SoapTypeAttribute : public SoapAttribute // 0x28
	{
	public:
		System::Runtime::Remoting::Metadata::SoapOption _soapOption; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		bool _useAttribute; // 0x2c (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* _xmlElementName; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Runtime::Remoting::Metadata::XmlFieldOrderOption _xmlFieldOrder; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* _xmlNamespace; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _xmlTypeName; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _xmlTypeNamespace; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		bool _isType; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
		bool _isElement; // 0x59 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
