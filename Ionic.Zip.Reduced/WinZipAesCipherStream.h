#pragma once

#include "..\Ionic\Zip\WinZipAesCrypto.h"
#include "..\System\IO\Stream.h"
#include "..\Ionic\Zip\CryptoMode.h"
#include "..\System\Security\Cryptography\HMACSHA1.h"
#include "..\System\Security\Cryptography\RijndaelManaged.h"
#include "..\System\Security\Cryptography\ICryptoTransform.h"
#include "..\System\Object.h"

namespace Ionic
{
	namespace Zip
{
	class WinZipAesCipherStream : public Stream // 0x18
	{
	public:
		Ionic::Zip::WinZipAesCrypto* _params; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* _s; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::HMACSHA1* _mac; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		System::Security::Cryptography::RijndaelManaged* _aesCipher; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		System::Security::Cryptography::ICryptoTransform* _xform; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		unsigned char* counter; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* counterOut; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _PendingWriteBlock; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _iobuf; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Object _outputLock; // 0x60 (size: 0x8, flags: 0x1, type: 0x1c)
		Ionic::Zip::CryptoMode _mode; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
		int _nonce; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		bool _finalBlock; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 _length; // 0x78 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 _totalBytesXferred; // 0x80 (size: 0x8, flags: 0x1, type: 0xa)
		int _pendingCount; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x90
}
