class IClientHTTPMap
{
	virtual uint32 CreateHTTPRequest( EHTTPMethod, const char * ) = 0;
	virtual uint8 SetHTTPRequestContextValue( uint32, uint64 ) = 0;
	virtual uint8 SetHTTPRequestNetworkActivityTimeout( uint32, uint32 ) = 0;
	virtual uint8 SetHTTPRequestHeaderValue( uint32, const char *, const char * ) = 0;
	virtual uint8 SetHTTPRequestGetOrPostParameter( uint32, const char *, const char * ) = 0;
	virtual uint8 SendHTTPRequest( uint32, uint64 * ) = 0;
	virtual uint8 DeferHTTPRequest( uint32 ) = 0;
	virtual uint8 PrioritizeHTTPRequest( uint32 ) = 0;
	virtual uint8 GetHTTPResponseHeaderSize( uint32, const char *, uint32 * ) = 0;
	virtual uint8 GetHTTPResponseHeaderValue( uint32, const char *, uint8 *, uint32 ) = 0;
	virtual uint8 GetHTTPResponseBodySize( uint32, uint32 * ) = 0;
	virtual uint8 GetHTTPResponseBodyData( uint32, uint8 *, uint32 ) = 0;
	virtual uint8 ReleaseHTTPRequest( uint32 ) = 0;
	virtual uint8 GetHTTPDownloadProgressPct( uint32, float * ) = 0;
};

