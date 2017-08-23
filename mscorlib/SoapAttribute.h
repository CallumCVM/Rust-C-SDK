#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"

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
	class SoapAttribute : public Attribute // 0x0
	{
	public:
		bool _nested; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool _useAttribute; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* ProtXmlNamespace; // 0x18 (size: 0x8, flags: 0x4, type: 0xe)
		System::Object ReflectInfo; // 0x20 (size: 0x8, flags: 0x4, type: 0x1c)
	}; // size = 0x28
}
