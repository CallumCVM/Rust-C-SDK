#pragma once

#include "..\UnityEngine\Windows\Speech\ConfidenceLevel.h"
#include "..\UnityEngine\Windows\Speech\SemanticMeaning.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\DateTime.h"
#include "..\System\TimeSpan.h"

namespace UnityEngine
{
	namespace Windows
{
{
		namespace Speech
{
	class PhraseRecognizedEventArgs : public ValueType // 0x0
	{
	public:
		UnityEngine::Windows::Speech::ConfidenceLevel confidence; // 0x10 (size: 0x4, flags: 0x26, type: 0x11)
		UnityEngine::Windows::Speech::SemanticMeaning* semanticMeanings; // 0x18 (size: 0x8, flags: 0x26, type: 0x1d)
		UnityEngine::UnicodeString* text; // 0x20 (size: 0x8, flags: 0x26, type: 0xe)
		System::DateTime phraseStartTime; // 0x28 (size: 0x10, flags: 0x26, type: 0x11)
		System::TimeSpan phraseDuration; // 0x38 (size: 0x8, flags: 0x26, type: 0x11)
	}; // size = 0x40
}
