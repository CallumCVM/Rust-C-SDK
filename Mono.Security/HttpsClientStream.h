#pragma once

#include "..\System\Net\HttpWebRequest.h"

namespace Mono
{
	namespace Security
{
{
		namespace Protocol
{
{
{
			namespace Tls
{
	class HttpsClientStream : public SslClientStream // 0x90
	{
	public:
		System::Net::HttpWebRequest* _request; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		int _status; // 0x98 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xa0
}
