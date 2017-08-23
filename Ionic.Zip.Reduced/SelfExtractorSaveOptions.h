#pragma once

#include "..\Ionic\Zip\SelfExtractorFlavor.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Ionic\Zip\ExtractExistingFileAction.h"
#include "..\System\Version.h"

namespace Ionic
{
	namespace Zip
{
	class SelfExtractorSaveOptions : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <PostExtractCommandLine>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <DefaultExtractDirectory>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <IconFile>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Version* <FileVersion>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* <ProductVersion>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Copyright>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Description>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <ProductName>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <SfxExeWindowTitle>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <AdditionalCompilerSwitches>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		Ionic::Zip::SelfExtractorFlavor <Flavor>k__BackingField; // 0x60 (size: 0x4, flags: 0x1, type: 0x11)
		bool <Quiet>k__BackingField; // 0x64 (size: 0x1, flags: 0x1, type: 0x2)
		Ionic::Zip::ExtractExistingFileAction <ExtractExistingFile>k__BackingField; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
		bool <RemoveUnpackedFilesAfterExecute>k__BackingField; // 0x6c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
