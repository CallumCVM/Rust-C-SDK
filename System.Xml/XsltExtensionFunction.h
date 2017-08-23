#pragma once

#include "..\System\Object.h"
#include "..\System\Reflection\MethodInfo.h"
#include "..\System\TypeCode.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XsltExtensionFunction : public XPFuncImpl // 0x28
	{
	public:
		System::Object extension; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Reflection::MethodInfo* method; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::TypeCode* typeCodes; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x40
}
