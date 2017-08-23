#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Specialized\ProcessStringDictionary.h"
#include "..\System\Diagnostics\ProcessWindowStyle.h"
#include "..\System\Text\Encoding.h"
#include "..\System\Security\SecureString.h"

namespace System
{
	namespace Diagnostics
{
	class ProcessStartInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* arguments; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		__int64 error_dialog_parent_handle; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
		UnityEngine::UnicodeString* filename; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* verb; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* working_directory; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Specialized::ProcessStringDictionary* envVars; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool create_no_window; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		bool error_dialog; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
		bool redirect_standard_error; // 0x42 (size: 0x1, flags: 0x1, type: 0x2)
		bool redirect_standard_input; // 0x43 (size: 0x1, flags: 0x1, type: 0x2)
		bool redirect_standard_output; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
		bool use_shell_execute; // 0x45 (size: 0x1, flags: 0x1, type: 0x2)
		System::Diagnostics::ProcessWindowStyle window_style; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
		System::Text::Encoding* encoding_stderr; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* encoding_stdout; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* username; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* domain; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::SecureString* password; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		bool load_user_profile; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
