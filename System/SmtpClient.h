#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\ICredentialsByHost.h"
#include "..\System\Net\Mail\SmtpDeliveryMethod.h"
#include "..\System\Security\Cryptography\X509Certificates\X509CertificateCollection.h"
#include "..\System\Net\Sockets\TcpClient.h"
#include "..\System\IO\Stream.h"
#include "..\System\IO\StreamWriter.h"
#include "..\System\IO\StreamReader.h"
#include "..\System\Net\Mail\MailAddress.h"
#include "..\System\Net\Mail\MailMessage.h"
#include "..\System\ComponentModel\BackgroundWorker.h"
#include "..\System\Object.h"
#include "..\System\Net\Mail\SmtpClient\AuthMechs.h"
#include "..\System\Threading\Mutex.h"
#include "..\System\Net\Security\RemoteCertificateValidationCallback.h"
#include "..\System\Net\Mail\SendCompletedEventHandler.h"

namespace System
{
	namespace Net
{
{
		namespace Mail
{
	class SmtpClient : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* host; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::ICredentialsByHost* credentials; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* pickupDirectoryLocation; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Sockets::TcpClient* client; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* stream; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::StreamWriter* writer; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::StreamReader* reader; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mail::MailAddress* defaultFrom; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mail::MailMessage* messageInProcess; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::BackgroundWorker* worker; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object user_async_state; // 0x68 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Threading::Mutex* mutex; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Security::RemoteCertificateValidationCallback* callback; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mail::SendCompletedEventHandler* SendCompleted; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* <TargetName>k__BackingField; // 0x88 (size: 0x8, flags: 0x1, type: 0xe)
		int port; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
		int timeout; // 0x94 (size: 0x4, flags: 0x1, type: 0x8)
		System::Net::Mail::SmtpDeliveryMethod deliveryMethod; // 0x98 (size: 0x4, flags: 0x1, type: 0x11)
		bool enableSsl; // 0x9c (size: 0x1, flags: 0x1, type: 0x2)
		int boundaryIndex; // 0xa0 (size: 0x4, flags: 0x1, type: 0x8)
		System::Net::Mail::SmtpClient::AuthMechs authMechs; // 0xa4 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xa8
}
