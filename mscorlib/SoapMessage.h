#pragma once

#include "..\System\Runtime\Remoting\Messaging\Header.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Object.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
{
{
			namespace Formatters
{
	class SoapMessage : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::Messaging::Header* headers; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* methodName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** paramNames; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* paramTypes; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Object* paramValues; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* xmlNameSpace; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x40
}
