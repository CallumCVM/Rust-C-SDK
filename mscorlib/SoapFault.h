#pragma once

#include "..\UnityEngine\UnicodeString*.h"
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
	class SoapFault : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* code; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* actor; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* faultString; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object detail; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x30
}
