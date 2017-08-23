#pragma once

#include "..\Mono\Xml\Xsl\Operations\XslAvt.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Hashtable.h"
#include "..\Mono\Xml\Xsl\Operations\XslOperation.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
{
{
			namespace Operations
{
	class XslAttribute : public XslCompiledElement // 0x20
	{
	public:
		Mono::Xml::Xsl::Operations::XslAvt* name; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslAvt* ns; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* calcName; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* calcNs; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* calcPrefix; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Hashtable* nsDecls; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslOperation* value; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x58
}
