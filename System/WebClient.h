#pragma once

#include "..\System\Net\ICredentials.h"
#include "..\System\Net\WebHeaderCollection.h"
#include "..\System\Uri.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Specialized\NameValueCollection.h"
#include "..\System\Threading\Thread.h"
#include "..\System\Text\Encoding.h"
#include "..\System\Net\IWebProxy.h"
#include "..\System\Net\DownloadDataCompletedEventHandler.h"
#include "..\System\ComponentModel\AsyncCompletedEventHandler.h"
#include "..\System\Net\DownloadProgressChangedEventHandler.h"
#include "..\System\Net\DownloadStringCompletedEventHandler.h"
#include "..\System\Net\OpenReadCompletedEventHandler.h"
#include "..\System\Net\OpenWriteCompletedEventHandler.h"
#include "..\System\Net\UploadDataCompletedEventHandler.h"
#include "..\System\Net\UploadFileCompletedEventHandler.h"
#include "..\System\Net\UploadProgressChangedEventHandler.h"
#include "..\System\Net\UploadStringCompletedEventHandler.h"
#include "..\System\Net\UploadValuesCompletedEventHandler.h"

namespace System
{
	namespace Net
{
	class WebClient : public Component // 0x30
	{
	public:
		System::Net::ICredentials* credentials; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebHeaderCollection* headers; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebHeaderCollection* responseHeaders; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Uri* baseAddress; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* baseString; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Specialized::NameValueCollection* queryString; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::Thread* async_thread; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* encoding; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::IWebProxy* proxy; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::DownloadDataCompletedEventHandler* DownloadDataCompleted; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::AsyncCompletedEventHandler* DownloadFileCompleted; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::DownloadProgressChangedEventHandler* DownloadProgressChanged; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::DownloadStringCompletedEventHandler* DownloadStringCompleted; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::OpenReadCompletedEventHandler* OpenReadCompleted; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::OpenWriteCompletedEventHandler* OpenWriteCompleted; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::UploadDataCompletedEventHandler* UploadDataCompleted; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::UploadFileCompletedEventHandler* UploadFileCompleted; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::UploadProgressChangedEventHandler* UploadProgressChanged; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::UploadStringCompletedEventHandler* UploadStringCompleted; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::UploadValuesCompletedEventHandler* UploadValuesCompleted; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		bool is_busy; // 0xd0 (size: 0x1, flags: 0x1, type: 0x2)
		bool async; // 0xd1 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xd8
}
