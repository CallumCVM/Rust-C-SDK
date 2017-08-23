#pragma once

#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Object.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XsltDebuggerWrapper : public Object // 0x0
	{
	public:
		System::Reflection::MethodInfo* on_compile; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Reflection::MethodInfo* on_execute; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		System::Object impl; // 0x20 (size: 0x8, flags: 0x21, type: 0x1c)
	}; // size = 0x28
}
