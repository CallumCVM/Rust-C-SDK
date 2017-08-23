#pragma once

#include "..\System\Uri.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\ServicePoint.h"
#include "..\System\IO\Stream.h"
#include "..\System\IO\StreamReader.h"
#include "..\System\Net\NetworkCredential.h"
#include "..\System\Net\IPHostEntry.h"
#include "..\System\Net\IPEndPoint.h"
#include "..\System\Net\IWebProxy.h"
#include "..\System\Object.h"
#include "..\System\Net\FtpWebRequest\RequestState.h"
#include "..\System\Net\FtpAsyncResult.h"
#include "..\System\Net\FtpWebResponse.h"
#include "..\System\Net\Security\RemoteCertificateValidationCallback.h"

namespace System
{
	namespace Net
{
	class FtpWebRequest : public WebRequest // 0x20
	{
	public:
		System::Uri* requestUri; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* file_name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::ServicePoint* servicePoint; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* origDataStream; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* dataStream; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* controlStream; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::StreamReader* controlReader; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::NetworkCredential* credentials; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::IPHostEntry* hostEntry; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::IPEndPoint* localEndPoint; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::IWebProxy* proxy; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* method; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* renameTo; // 0x80 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object locker; // 0x88 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Net::FtpAsyncResult* asyncResult; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::FtpWebResponse* ftpResponse; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* requestStream; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* initial_path; // 0xa8 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::Security::RemoteCertificateValidationCallback* callback; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		int timeout; // 0xb8 (size: 0x4, flags: 0x1, type: 0x8)
		int rwTimeout; // 0xbc (size: 0x4, flags: 0x1, type: 0x8)
		__int64 offset; // 0xc0 (size: 0x8, flags: 0x1, type: 0xa)
		bool binary; // 0xc8 (size: 0x1, flags: 0x1, type: 0x2)
		bool enableSsl; // 0xc9 (size: 0x1, flags: 0x1, type: 0x2)
		bool usePassive; // 0xca (size: 0x1, flags: 0x1, type: 0x2)
		bool keepAlive; // 0xcb (size: 0x1, flags: 0x1, type: 0x2)
		System::Net::FtpWebRequest::RequestState requestState; // 0xcc (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xd0
}
