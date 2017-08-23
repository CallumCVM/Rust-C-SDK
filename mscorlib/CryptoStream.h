#pragma once

#include "..\System\IO\Stream.h"
#include "..\System\Security\Cryptography\ICryptoTransform.h"
#include "..\System\Security\Cryptography\CryptoStreamMode.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class CryptoStream : public Stream // 0x18
	{
	public:
		System::IO::Stream* _stream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::ICryptoTransform* _transform; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::CryptoStreamMode _mode; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		unsigned char* _currentBlock; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		bool _disposed; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool _flushedFinalBlock; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
		int _partialCount; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		bool _endOfStream; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned char* _waitingBlock; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		int _waitingCount; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned char* _transformedBlock; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		int _transformedPos; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int _transformedCount; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned char* _workingBlock; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		int _workingCount; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x78
}
