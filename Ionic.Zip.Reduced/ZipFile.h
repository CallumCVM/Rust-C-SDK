#pragma once

#include "..\System\IO\TextWriter.h"
#include "..\System\IO\Stream.h"
#include "..\System\UInt16.h"
#include "..\Ionic\Zip\ZipErrorAction.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"
#include "..\Ionic\Zlib\CompressionStrategy.h"
#include "..\Ionic\Zip\CompressionMethod.h"
#include "..\System\Object.h"
#include "..\Ionic\Zip\EncryptionAlgorithm.h"
#include "..\System\Text\Encoding.h"
#include "..\Ionic\Zip\ZipOption.h"
#include "..\Ionic\Zlib\ParallelDeflateOutputStream.h"
#include "..\Ionic\Zip\Zip64Option.h"
#include "..\System\EventHandler<Ionic\Zip\SaveProgressEventArgs>.h"
#include "..\System\EventHandler<Ionic\Zip\ReadProgressEventArgs>.h"
#include "..\System\EventHandler<Ionic\Zip\ExtractProgressEventArgs>.h"
#include "..\System\EventHandler<Ionic\Zip\AddProgressEventArgs>.h"
#include "..\System\EventHandler<Ionic\Zip\ZipErrorEventArgs>.h"
#include "..\Ionic\Zlib\CompressionLevel.h"
#include "..\Ionic\Zip\ExtractExistingFileAction.h"
#include "..\Ionic\Zip\SetCompressionCallback.h"

namespace Ionic
{
	namespace Zip
{
	class ZipFile : public Object // 0x0
	{
	public:
		System::IO::TextWriter* _StatusMessageTextWriter; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* _readstream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* _writestream; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,Ionic.Zip.ZipEntry> _entries; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<Ionic.Zip.ZipEntry>* _zipEntriesAsList; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* _name; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _readName; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _Comment; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _Password; // 0x50 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* _temporaryFileName; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _TempFileFolder; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object LOCK; // 0x68 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Text::Encoding* _alternateEncoding; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zlib::ParallelDeflateOutputStream* ParallelDeflater; // 0x78 (size: 0x8, flags: 0x3, type: 0x12)
		System::EventHandler<Ionic::Zip::SaveProgressEventArgs> SaveProgress; // 0x80 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<Ionic::Zip::ReadProgressEventArgs> ReadProgress; // 0x88 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<Ionic::Zip::ExtractProgressEventArgs> ExtractProgress; // 0x90 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<Ionic::Zip::AddProgressEventArgs> AddProgress; // 0x98 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<Ionic::Zip::ZipErrorEventArgs> ZipError; // 0xa0 (size: 0x8, flags: 0x1, type: 0x15)
		Ionic::Zip::SetCompressionCallback* <SetCompression>k__BackingField; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		bool _CaseSensitiveRetrieval; // 0xb0 (size: 0x1, flags: 0x1, type: 0x2)
		System::UInt16 _versionMadeBy; // 0xb2 (size: 0x2, flags: 0x1, type: 0x7)
		System::UInt16 _versionNeededToExtract; // 0xb4 (size: 0x2, flags: 0x1, type: 0x7)
		unsigned int _diskNumberWithCd; // 0xb8 (size: 0x4, flags: 0x1, type: 0x9)
		int _maxOutputSegmentSize; // 0xbc (size: 0x4, flags: 0x1, type: 0x8)
		unsigned int _numberOfSegmentsForMostRecentSave; // 0xc0 (size: 0x4, flags: 0x1, type: 0x9)
		Ionic::Zip::ZipErrorAction _zipErrorAction; // 0xc4 (size: 0x4, flags: 0x1, type: 0x11)
		bool _disposed; // 0xc8 (size: 0x1, flags: 0x1, type: 0x2)
		bool _emitNtfsTimes; // 0xc9 (size: 0x1, flags: 0x1, type: 0x2)
		bool _emitUnixTimes; // 0xca (size: 0x1, flags: 0x1, type: 0x2)
		Ionic::Zlib::CompressionStrategy _Strategy; // 0xcc (size: 0x4, flags: 0x1, type: 0x11)
		Ionic::Zip::CompressionMethod _compressionMethod; // 0xd0 (size: 0x4, flags: 0x1, type: 0x11)
		bool _fileAlreadyExists; // 0xd4 (size: 0x1, flags: 0x1, type: 0x2)
		bool _contentsChanged; // 0xd5 (size: 0x1, flags: 0x1, type: 0x2)
		bool _hasBeenSaved; // 0xd6 (size: 0x1, flags: 0x1, type: 0x2)
		bool _ReadStreamIsOurs; // 0xd7 (size: 0x1, flags: 0x1, type: 0x2)
		bool _saveOperationCanceled; // 0xd8 (size: 0x1, flags: 0x1, type: 0x2)
		bool _extractOperationCanceled; // 0xd9 (size: 0x1, flags: 0x1, type: 0x2)
		bool _addOperationCanceled; // 0xda (size: 0x1, flags: 0x1, type: 0x2)
		Ionic::Zip::EncryptionAlgorithm _Encryption; // 0xdc (size: 0x4, flags: 0x1, type: 0x11)
		bool _JustSaved; // 0xe0 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 _locEndOfCDS; // 0xe8 (size: 0x8, flags: 0x1, type: 0xa)
		unsigned int _OffsetOfCentralDirectory; // 0xf0 (size: 0x4, flags: 0x1, type: 0x9)
		__int64 _OffsetOfCentralDirectory64; // 0xf8 (size: 0x8, flags: 0x1, type: 0xa)
		System.Nullable<bool> _OutputUsesZip64; // 0x100 (size: 0x2, flags: 0x1, type: 0x15)
		bool _inExtractAll; // 0x102 (size: 0x1, flags: 0x3, type: 0x2)
		Ionic::Zip::ZipOption _alternateEncodingUsage; // 0x104 (size: 0x4, flags: 0x1, type: 0x11)
		int _BufferSize; // 0x108 (size: 0x4, flags: 0x1, type: 0x8)
		__int64 _ParallelDeflateThreshold; // 0x110 (size: 0x8, flags: 0x1, type: 0xa)
		int _maxBufferPairs; // 0x118 (size: 0x4, flags: 0x1, type: 0x8)
		Ionic::Zip::Zip64Option _zip64; // 0x11c (size: 0x4, flags: 0x3, type: 0x11)
		bool _SavingSfx; // 0x120 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 _lengthOfReadStream; // 0x128 (size: 0x8, flags: 0x1, type: 0xa)
		bool <FullScan>k__BackingField; // 0x130 (size: 0x1, flags: 0x1, type: 0x2)
		bool <SortEntriesBeforeSaving>k__BackingField; // 0x131 (size: 0x1, flags: 0x1, type: 0x2)
		bool <AddDirectoryWillTraverseReparsePoints>k__BackingField; // 0x132 (size: 0x1, flags: 0x1, type: 0x2)
		int <CodecBufferSize>k__BackingField; // 0x134 (size: 0x4, flags: 0x1, type: 0x8)
		bool <FlattenFoldersOnExtract>k__BackingField; // 0x138 (size: 0x1, flags: 0x1, type: 0x2)
		Ionic::Zlib::CompressionLevel <CompressionLevel>k__BackingField; // 0x13c (size: 0x4, flags: 0x1, type: 0x11)
		Ionic::Zip::ExtractExistingFileAction <ExtractExistingFile>k__BackingField; // 0x140 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x148
}
