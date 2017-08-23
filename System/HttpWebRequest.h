#pragma once

#include "..\System\Uri.h"
#include "..\System\Security\Cryptography\X509Certificates\X509CertificateCollection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\HttpContinueDelegate.h"
#include "..\System\Net\CookieContainer.h"
#include "..\System\Net\ICredentials.h"
#include "..\System\Net\WebHeaderCollection.h"
#include "..\System\Version.h"
#include "..\System\Net\IWebProxy.h"
#include "..\System\Net\ServicePoint.h"
#include "..\System\Net\WebConnectionStream.h"
#include "..\System\Net\HttpWebResponse.h"
#include "..\System\Net\WebAsyncResult.h"
#include "..\System\EventHandler.h"
#include "..\System\Exception.h"
#include "..\System\Object.h"
#include "..\System\Net\WebConnection.h"
#include "..\System\Net\DecompressionMethods.h"

namespace System
{
	namespace Net
{
	class HttpWebRequest : public WebRequest // 0x20
	{
	public:
		System::Uri* requestUri; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Uri* actualUri; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* connectionGroup; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::HttpContinueDelegate* continueDelegate; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::CookieContainer* cookieContainer; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::ICredentials* credentials; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebHeaderCollection* webHeaders; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* mediaType; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* method; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* initialMethod; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		System::Version* version; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Version* actualVersion; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::IWebProxy* proxy; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::ServicePoint* servicePoint; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebConnectionStream* writeStream; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::HttpWebResponse* webResponse; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebAsyncResult* asyncWrite; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebAsyncResult* asyncRead; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* abortHandler; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* bodyBuffer; // 0xc0 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Exception* saved_exc; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object locker; // 0xd0 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Net::WebConnection* WebConnection; // 0xd8 (size: 0x8, flags: 0x3, type: 0x12)
		bool hostChanged; // 0xe0 (size: 0x1, flags: 0x1, type: 0x2)
		bool allowAutoRedirect; // 0xe1 (size: 0x1, flags: 0x1, type: 0x2)
		bool allowBuffering; // 0xe2 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 contentLength; // 0xe8 (size: 0x8, flags: 0x1, type: 0xa)
		bool haveResponse; // 0xf0 (size: 0x1, flags: 0x1, type: 0x2)
		bool haveRequest; // 0xf1 (size: 0x1, flags: 0x1, type: 0x2)
		bool requestSent; // 0xf2 (size: 0x1, flags: 0x1, type: 0x2)
		bool keepAlive; // 0xf3 (size: 0x1, flags: 0x1, type: 0x2)
		int maxAutoRedirect; // 0xf4 (size: 0x4, flags: 0x1, type: 0x8)
		bool pipelined; // 0xf8 (size: 0x1, flags: 0x1, type: 0x2)
		bool preAuthenticate; // 0xf9 (size: 0x1, flags: 0x1, type: 0x2)
		bool usedPreAuth; // 0xfa (size: 0x1, flags: 0x1, type: 0x2)
		bool sendChunked; // 0xfb (size: 0x1, flags: 0x1, type: 0x2)
		int timeout; // 0xfc (size: 0x4, flags: 0x1, type: 0x8)
		int aborted; // 0x100 (size: 0x4, flags: 0x1, type: 0x8)
		bool gotRequestStream; // 0x104 (size: 0x1, flags: 0x1, type: 0x2)
		int redirects; // 0x108 (size: 0x4, flags: 0x1, type: 0x8)
		bool expectContinue; // 0x10c (size: 0x1, flags: 0x1, type: 0x2)
		bool authCompleted; // 0x10d (size: 0x1, flags: 0x1, type: 0x2)
		int bodyBufferLength; // 0x110 (size: 0x4, flags: 0x1, type: 0x8)
		bool getResponseCalled; // 0x114 (size: 0x1, flags: 0x1, type: 0x2)
		bool is_ntlm_auth; // 0x115 (size: 0x1, flags: 0x1, type: 0x2)
		bool finished_reading; // 0x116 (size: 0x1, flags: 0x1, type: 0x2)
		System::Net::DecompressionMethods auto_decomp; // 0x118 (size: 0x4, flags: 0x1, type: 0x11)
		int maxResponseHeadersLength; // 0x11c (size: 0x4, flags: 0x1, type: 0x8)
		int readWriteTimeout; // 0x120 (size: 0x4, flags: 0x1, type: 0x8)
		bool unsafe_auth_blah; // 0x124 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x128
}
