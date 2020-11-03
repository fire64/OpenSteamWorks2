class CAdapterSteamRemoteStorage001
{
	virtual unknown_ret FileWrite( const char *, const void *, int32 ) = 0;
	virtual unknown_ret GetFileSize( const char * ) = 0;
	virtual unknown_ret FileRead( const char *, void *, int32 ) = 0;
	virtual unknown_ret FileExists( const char * ) = 0;
	virtual unknown_ret FileDelete( const char * ) = 0;
	virtual unknown_ret GetFileCount() = 0;
	virtual unknown_ret GetFileNameAndSize( int32, int32 * ) = 0;
	virtual unknown_ret GetQuota( int32 *, int32 * ) = 0;
};

