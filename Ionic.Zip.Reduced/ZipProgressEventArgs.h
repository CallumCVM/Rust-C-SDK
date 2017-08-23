#pragma once

#include "..\Ionic\Zip\ZipEntry.h"
#include "..\Ionic\Zip\ZipProgressEventType.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Ionic
{
	namespace Zip
{
	class ZipProgressEventArgs : public EventArgs // 0x0
	{
	public:
		Ionic::Zip::ZipEntry* _latestEntry; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _archiveName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		int _entriesTotal; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		bool _cancel; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
		Ionic::Zip::ZipProgressEventType _flavor; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		__int64 _bytesTransferred; // 0x30 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 _totalBytesToTransfer; // 0x38 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x40
}
