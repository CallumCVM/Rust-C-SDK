#pragma once

#include "..\UnityEngine\TouchScreenKeyboard.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Graphic.h"
#include "..\UnityEngine\UI\InputField\ContentType.h"
#include "..\UnityEngine\UI\InputField\InputType.h"
#include "..\System\Char.h"
#include "..\UnityEngine\TouchScreenKeyboardType.h"
#include "..\UnityEngine\UI\InputField\LineType.h"
#include "..\UnityEngine\UI\InputField\CharacterValidation.h"
#include "..\UnityEngine\UI\InputField\SubmitEvent.h"
#include "..\UnityEngine\UI\InputField\OnChangeEvent.h"
#include "..\UnityEngine\UI\InputField\OnValidateInput.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\UIVertex.h"
#include "..\UnityEngine\TextGenerator.h"
#include "..\UnityEngine\CanvasRenderer.h"
#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Coroutine.h"
#include "..\UnityEngine\Event.h"

namespace UnityEngine
{
	namespace UI
{
	class InputField : public Selectable // 0xc8
	{
	public:
		UnityEngine::TouchScreenKeyboard* m_Keyboard; // 0xc8 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::UI::Text* m_TextComponent; // 0xd0 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::UI::Graphic* m_Placeholder; // 0xd8 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::UI::InputField::SubmitEvent* m_OnEndEdit; // 0xe0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::InputField::OnChangeEvent* m_OnValueChanged; // 0xe8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::InputField::OnValidateInput* m_OnValidateInput; // 0xf0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_Text; // 0xf8 (size: 0x8, flags: 0x4, type: 0xe)
		UnityEngine::RectTransform* caretRectTrans; // 0x100 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UIVertex* m_CursorVerts; // 0x108 (size: 0x8, flags: 0x4, type: 0x1d)
		UnityEngine::TextGenerator* m_InputTextCache; // 0x110 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::CanvasRenderer* m_CachedInputRenderer; // 0x118 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Mesh* m_Mesh; // 0x120 (size: 0x8, flags: 0x84, type: 0x12)
		UnityEngine::Coroutine* m_BlinkCoroutine; // 0x128 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Coroutine* m_DragCoroutine; // 0x130 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_OriginalText; // 0x138 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::Event* m_ProcessingEvent; // 0x140 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::InputField::ContentType m_ContentType; // 0x148 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UI::InputField::InputType m_InputType; // 0x14c (size: 0x4, flags: 0x1, type: 0x11)
		System::Char m_AsteriskChar; // 0x150 (size: 0x2, flags: 0x1, type: 0x3)
		UnityEngine::TouchScreenKeyboardType m_KeyboardType; // 0x154 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UI::InputField::LineType m_LineType; // 0x158 (size: 0x4, flags: 0x1, type: 0x11)
		bool m_HideMobileInput; // 0x15c (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UI::InputField::CharacterValidation m_CharacterValidation; // 0x160 (size: 0x4, flags: 0x1, type: 0x11)
		int m_CharacterLimit; // 0x164 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Color m_CaretColor; // 0x168 (size: 0x10, flags: 0x1, type: 0x11)
		bool m_CustomCaretColor; // 0x178 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Color m_SelectionColor; // 0x17c (size: 0x10, flags: 0x1, type: 0x11)
		float m_CaretBlinkRate; // 0x18c (size: 0x4, flags: 0x1, type: 0xc)
		int m_CaretWidth; // 0x190 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_ReadOnly; // 0x194 (size: 0x1, flags: 0x1, type: 0x2)
		int m_CaretPosition; // 0x198 (size: 0x4, flags: 0x4, type: 0x8)
		int m_CaretSelectPosition; // 0x19c (size: 0x4, flags: 0x4, type: 0x8)
		bool m_PreventFontCallback; // 0x1a0 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_AllowInput; // 0x1a1 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_ShouldActivateNextUpdate; // 0x1a2 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_UpdateDrag; // 0x1a3 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_DragPositionOutOfBounds; // 0x1a4 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_CaretVisible; // 0x1a5 (size: 0x1, flags: 0x4, type: 0x2)
		float m_BlinkStartTime; // 0x1a8 (size: 0x4, flags: 0x1, type: 0xc)
		int m_DrawStart; // 0x1ac (size: 0x4, flags: 0x4, type: 0x8)
		int m_DrawEnd; // 0x1b0 (size: 0x4, flags: 0x4, type: 0x8)
		bool m_WasCanceled; // 0x1b4 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_HasDoneFocusTransition; // 0x1b5 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x1b8
}
