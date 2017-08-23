#pragma once

#include "..\UnityEngine\Windows\Speech\PhraseRecognizer\PhraseRecognizedDelegate.h"

namespace UnityEngine
{
	namespace Windows
{
{
		namespace Speech
{
	class PhraseRecognizer : public Object // 0x0
	{
	public:
		UnityEngine::Windows::Speech::PhraseRecognizer::PhraseRecognizedDelegate* OnPhraseRecognized; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 m_Recognizer; // 0x18 (size: 0x8, flags: 0x4, type: 0x18)
	}; // size = 0x20
}
