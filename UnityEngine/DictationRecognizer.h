#pragma once

#include "..\UnityEngine\Windows\Speech\DictationRecognizer\DictationHypothesisDelegate.h"
#include "..\UnityEngine\Windows\Speech\DictationRecognizer\DictationResultDelegate.h"
#include "..\UnityEngine\Windows\Speech\DictationRecognizer\DictationCompletedDelegate.h"
#include "..\UnityEngine\Windows\Speech\DictationRecognizer\DictationErrorHandler.h"

namespace UnityEngine
{
	namespace Windows
{
{
		namespace Speech
{
	class DictationRecognizer : public Object // 0x0
	{
	public:
		UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate* DictationHypothesis; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate* DictationResult; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Windows::Speech::DictationRecognizer::DictationCompletedDelegate* DictationComplete; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Windows::Speech::DictationRecognizer::DictationErrorHandler* DictationError; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 m_Recognizer; // 0x30 (size: 0x8, flags: 0x1, type: 0x18)
	}; // size = 0x38
}
