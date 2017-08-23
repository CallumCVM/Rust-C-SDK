#pragma once

#include "..\System\IO\TextWriter.h"
#include "..\System\Collections\Stack.h"
#include "..\System\Text\Encoding.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class HtmlEmitter : public Emitter // 0x0
	{
	public:
		System::IO::TextWriter* writer; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* elementNameStack; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* outputEncoding; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* mediaType; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		bool openElement; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool openAttribute; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		int nonHtmlDepth; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		bool indent; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
