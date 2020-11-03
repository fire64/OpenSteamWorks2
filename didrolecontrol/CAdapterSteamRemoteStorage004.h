class CAdapterSteamRemoteStorage004
{
	virtual unknown_ret FileWrite( const char *, const void *, int32 ) = 0;
	virtual unknown_ret FileRead( const char *, void *, int32 ) = 0;
	virtual unknown_ret FileForget( const char * ) = 0;
	virtual unknown_ret FileDelete( const char * ) = 0;
	virtual unknown_ret FileShare( const char * ) = 0;
	virtual unknown_ret SetSyncPlatforms( const char *, ERemoteStoragePlatform ) = 0;
	virtual unknown_ret FileExists( const char * ) = 0;
	virtual unknown_ret FilePersisted( const char * ) = 0;
	virtual unknown_ret GetFileSize( const char * ) = 0;
	virtual unknown_ret GetFileTimestamp( const char * ) = 0;
	virtual unknown_ret GetSyncPlatforms( const char * ) = 0;
	virtual unknown_ret GetFileCount() = 0;
	virtual unknown_ret GetFileNameAndSize( int32, int32 * ) = 0;
	virtual unknown_ret GetQuota( int32 *, int32 * ) = 0;
	virtual unknown_ret IsCloudEnabledForAccount() = 0;
	virtual unknown_ret IsCloudEnabledForApp() = 0;
	virtual unknown_ret SetCloudEnabledForApp( bool ) = 0;
	virtual unknown_ret UGCDownload( uint64 ) = 0;
	virtual unknown_ret GetUGCDetails( uint64, uint32 *, char **, int32 *, CSteamID * ) = 0;
	virtual unknown_ret UGCRead( uint64, void *, int32 ) = 0;
	virtual unknown_ret GetCachedUGCCount() = 0;
	virtual unknown_ret GetCachedUGCHandle( int32 ) = 0;
};

