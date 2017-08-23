#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class Tokenizer : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_rgchInput; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object m_objToken; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		int m_ich; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int m_cch; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int m_iToken; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int m_iTokenPrev; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		bool m_fPrevWasOperator; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_fThisIsOperator; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
