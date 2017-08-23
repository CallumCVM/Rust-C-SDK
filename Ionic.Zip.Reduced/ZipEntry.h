#pragma once

#include "..\System\Int16.h"
#include "..\Ionic\Zip\ZipCrypto.h"
#include "..\Ionic\Zip\WinZipAesCrypto.h"
#include "..\System\DateTime.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Ionic\Zlib\CompressionLevel.h"
#include "..\System\Text\Encoding.h"
#include "..\Ionic\Zip\ZipContainer.h"
#include "..\Ionic\Zip\ZipEntrySource.h"
#include "..\Ionic\Zip\EncryptionAlgorithm.h"
#include "..\System\IO\Stream.h"
#include "..\Ionic\Zip\ZipEntryTimestamp.h"
#include "..\Ionic\Zip\WriteDelegate.h"
#include "..\Ionic\Zip\OpenDelegate.h"
#include "..\Ionic\Zip\CloseDelegate.h"
#include "..\System\Object.h"
#include "..\Ionic\Zip\ExtractExistingFileAction.h"
#include "..\Ionic\Zip\ZipErrorAction.h"
#include "..\Ionic\Zip\SetCompressionCallback.h"
#include "..\Ionic\Zip\ZipOption.h"

namespace Ionic
{
	namespace Zip
{
	class ZipEntry : public Object // 0x0
	{
	public:
		Ionic::Zip::ZipCrypto* _zipCrypto_forExtract; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::ZipCrypto* _zipCrypto_forWrite; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::WinZipAesCrypto* _aesCrypto_forExtract; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::WinZipAesCrypto* _aesCrypto_forWrite; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _LocalFileName; // 0x30 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* _FileNameInArchive; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _Comment; // 0x40 (size: 0x8, flags: 0x3, type: 0xe)
		unsigned char* _CommentBytes; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _Extra; // 0x50 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Text::Encoding* _actualEncoding; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::ZipContainer* _container; // 0x60 (size: 0x8, flags: 0x3, type: 0x12)
		unsigned char* _EntryHeader; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* _Password; // 0x70 (size: 0x8, flags: 0x3, type: 0xe)
		unsigned char* _WeakEncryptionHeader; // 0x78 (size: 0x8, flags: 0x3, type: 0x1d)
		System::IO::Stream* _archiveStream; // 0x80 (size: 0x8, flags: 0x3, type: 0x12)
		System::IO::Stream* _sourceStream; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::WriteDelegate* _WriteDelegate; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::OpenDelegate* _OpenDelegate; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::CloseDelegate* _CloseDelegate; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* _inputDecryptorStream; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _outputLock; // 0xb0 (size: 0x8, flags: 0x1, type: 0x1c)
		Ionic::Zip::SetCompressionCallback* <SetCompression>k__BackingField; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* <ProvisionalAlternateEncoding>k__BackingField; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* <AlternateEncoding>k__BackingField; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Int16 _VersionMadeBy; // 0xd0 (size: 0x2, flags: 0x1, type: 0x6)
		System::Int16 _InternalFileAttrs; // 0xd2 (size: 0x2, flags: 0x1, type: 0x6)
		int _ExternalFileAttrs; // 0xd4 (size: 0x4, flags: 0x1, type: 0x8)
		System::Int16 _filenameLength; // 0xd8 (size: 0x2, flags: 0x1, type: 0x6)
		System::Int16 _extraFieldLength; // 0xda (size: 0x2, flags: 0x1, type: 0x6)
		System::Int16 _commentLength; // 0xdc (size: 0x2, flags: 0x1, type: 0x6)
		System::Int16 _WinZipAesMethod; // 0xde (size: 0x2, flags: 0x1, type: 0x6)
		System::DateTime _LastModified; // 0xe0 (size: 0x10, flags: 0x3, type: 0x11)
		System::DateTime _Mtime; // 0xf0 (size: 0x10, flags: 0x1, type: 0x11)
		System::DateTime _Atime; // 0x100 (size: 0x10, flags: 0x1, type: 0x11)
		System::DateTime _Ctime; // 0x110 (size: 0x10, flags: 0x1, type: 0x11)
		bool _ntfsTimesAreSet; // 0x120 (size: 0x1, flags: 0x1, type: 0x2)
		bool _emitNtfsTimes; // 0x121 (size: 0x1, flags: 0x1, type: 0x2)
		bool _emitUnixTimes; // 0x122 (size: 0x1, flags: 0x1, type: 0x2)
		bool _TrimVolumeFromFullyQualifiedPaths; // 0x123 (size: 0x1, flags: 0x1, type: 0x2)
		System::Int16 _VersionNeeded; // 0x124 (size: 0x2, flags: 0x3, type: 0x6)
		System::Int16 _BitField; // 0x126 (size: 0x2, flags: 0x3, type: 0x6)
		System::Int16 _CompressionMethod; // 0x128 (size: 0x2, flags: 0x3, type: 0x6)
		System::Int16 _CompressionMethod_FromZipFile; // 0x12a (size: 0x2, flags: 0x1, type: 0x6)
		Ionic::Zlib::CompressionLevel _CompressionLevel; // 0x12c (size: 0x4, flags: 0x1, type: 0x11)
		bool _IsDirectory; // 0x130 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 _CompressedSize; // 0x138 (size: 0x8, flags: 0x3, type: 0xa)
		__int64 _CompressedFileDataSize; // 0x140 (size: 0x8, flags: 0x3, type: 0xa)
		__int64 _UncompressedSize; // 0x148 (size: 0x8, flags: 0x3, type: 0xa)
		int _TimeBlob; // 0x150 (size: 0x4, flags: 0x3, type: 0x8)
		bool _crcCalculated; // 0x154 (size: 0x1, flags: 0x1, type: 0x2)
		int _Crc32; // 0x158 (size: 0x4, flags: 0x3, type: 0x8)
		bool _metadataChanged; // 0x15c (size: 0x1, flags: 0x1, type: 0x2)
		bool _restreamRequiredOnSave; // 0x15d (size: 0x1, flags: 0x1, type: 0x2)
		bool _sourceIsEncrypted; // 0x15e (size: 0x1, flags: 0x1, type: 0x2)
		bool _skippedDuringSave; // 0x15f (size: 0x1, flags: 0x1, type: 0x2)
		unsigned int _diskNumber; // 0x160 (size: 0x4, flags: 0x1, type: 0x9)
		__int64 __FileDataPosition; // 0x168 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 _RelativeOffsetOfLocalHeader; // 0x170 (size: 0x8, flags: 0x3, type: 0xa)
		__int64 _future_ROLH; // 0x178 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 _TotalEntrySize; // 0x180 (size: 0x8, flags: 0x1, type: 0xa)
		int _LengthOfHeader; // 0x188 (size: 0x4, flags: 0x1, type: 0x8)
		int _LengthOfTrailer; // 0x18c (size: 0x4, flags: 0x1, type: 0x8)
		bool _InputUsesZip64; // 0x190 (size: 0x1, flags: 0x3, type: 0x2)
		unsigned int _UnsupportedAlgorithmId; // 0x194 (size: 0x4, flags: 0x1, type: 0x9)
		Ionic::Zip::ZipEntrySource _Source; // 0x198 (size: 0x4, flags: 0x3, type: 0x11)
		Ionic::Zip::EncryptionAlgorithm _Encryption; // 0x19c (size: 0x4, flags: 0x3, type: 0x11)
		Ionic::Zip::EncryptionAlgorithm _Encryption_FromZipFile; // 0x1a0 (size: 0x4, flags: 0x3, type: 0x11)
		System.Nullable<__int64> _sourceStreamOriginalPosition; // 0x1a8 (size: 0x10, flags: 0x1, type: 0x15)
		bool _sourceWasJitProvided; // 0x1b8 (size: 0x1, flags: 0x1, type: 0x2)
		bool _ioOperationCanceled; // 0x1b9 (size: 0x1, flags: 0x1, type: 0x2)
		bool _presumeZip64; // 0x1ba (size: 0x1, flags: 0x1, type: 0x2)
		System.Nullable<bool> _entryRequiresZip64; // 0x1bb (size: 0x2, flags: 0x1, type: 0x15)
		System.Nullable<bool> _OutputUsesZip64; // 0x1bd (size: 0x2, flags: 0x1, type: 0x15)
		bool _IsText; // 0x1bf (size: 0x1, flags: 0x1, type: 0x2)
		Ionic::Zip::ZipEntryTimestamp _timestamp; // 0x1c0 (size: 0x4, flags: 0x1, type: 0x11)
		int _readExtraDepth; // 0x1c4 (size: 0x4, flags: 0x1, type: 0x8)
		Ionic::Zip::ExtractExistingFileAction <ExtractExistingFile>k__BackingField; // 0x1c8 (size: 0x4, flags: 0x1, type: 0x11)
		Ionic::Zip::ZipErrorAction <ZipErrorAction>k__BackingField; // 0x1cc (size: 0x4, flags: 0x1, type: 0x11)
		Ionic::Zip::ZipOption <AlternateEncodingUsage>k__BackingField; // 0x1d0 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x1d8
}
