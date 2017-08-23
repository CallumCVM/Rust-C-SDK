#pragma once

#include "..\System\Net\ServicePoint.h"
#include "..\System\IO\Stream.h"
#include "..\System\Net\Sockets\Socket.h"
#include "..\System\Object.h"
#include "..\System\Net\WebExceptionStatus.h"
#include "..\System\Threading\WaitCallback.h"
#include "..\System\EventHandler.h"
#include "..\System\Net\WebConnection\AbortHelper.h"
#include "..\System\Net\ReadState.h"
#include "..\System\Net\WebConnectionData.h"
#include "..\System\Net\ChunkStream.h"
#include "..\System\Collections\Queue.h"
#include "..\System\Net\HttpWebRequest.h"
#include "..\System\Net\NetworkCredential.h"
#include "..\System\Exception.h"

namespace System
{
	namespace Net
{
	class WebConnection : public Object // 0x0
	{
	public:
		System::Net::ServicePoint* sPoint; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* nstream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Sockets::Socket* socket; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object socketLock; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Threading::WaitCallback* initConn; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* buffer; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		System::EventHandler* abortHandler; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebConnection::AbortHelper* abortHelper; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebConnectionData* Data; // 0x50 (size: 0x8, flags: 0x3, type: 0x12)
		System::Net::ChunkStream* chunkStream; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Queue* queue; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::HttpWebRequest* priority_request; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::NetworkCredential* ntlm_credentials; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Exception* connect_exception; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebExceptionStatus status; // 0x80 (size: 0x4, flags: 0x1, type: 0x11)
		bool keepAlive; // 0x84 (size: 0x1, flags: 0x1, type: 0x2)
		System::Net::ReadState readState; // 0x88 (size: 0x4, flags: 0x1, type: 0x11)
		bool chunkedRead; // 0x8c (size: 0x1, flags: 0x1, type: 0x2)
		bool reused; // 0x8d (size: 0x1, flags: 0x1, type: 0x2)
		int position; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
		bool busy; // 0x94 (size: 0x1, flags: 0x1, type: 0x2)
		bool ntlm_authenticated; // 0x95 (size: 0x1, flags: 0x1, type: 0x2)
		bool unsafe_sharing; // 0x96 (size: 0x1, flags: 0x1, type: 0x2)
		bool ssl; // 0x97 (size: 0x1, flags: 0x1, type: 0x2)
		bool certsAvailable; // 0x98 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xa0
}
