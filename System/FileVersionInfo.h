#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Diagnostics
{
	class FileVersionInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* comments; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* companyname; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* filedescription; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* filename; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* fileversion; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* internalname; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* language; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* legalcopyright; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* legaltrademarks; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* originalfilename; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* privatebuild; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* productname; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* productversion; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* specialbuild; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		bool isdebug; // 0x80 (size: 0x1, flags: 0x1, type: 0x2)
		bool ispatched; // 0x81 (size: 0x1, flags: 0x1, type: 0x2)
		bool isprerelease; // 0x82 (size: 0x1, flags: 0x1, type: 0x2)
		bool isprivatebuild; // 0x83 (size: 0x1, flags: 0x1, type: 0x2)
		bool isspecialbuild; // 0x84 (size: 0x1, flags: 0x1, type: 0x2)
		int filemajorpart; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
		int fileminorpart; // 0x8c (size: 0x4, flags: 0x1, type: 0x8)
		int filebuildpart; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
		int fileprivatepart; // 0x94 (size: 0x4, flags: 0x1, type: 0x8)
		int productmajorpart; // 0x98 (size: 0x4, flags: 0x1, type: 0x8)
		int productminorpart; // 0x9c (size: 0x4, flags: 0x1, type: 0x8)
		int productbuildpart; // 0xa0 (size: 0x4, flags: 0x1, type: 0x8)
		int productprivatepart; // 0xa4 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xa8
}
