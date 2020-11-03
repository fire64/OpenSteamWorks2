class IClientShaderMap
{
	virtual void * BIsShaderManagementEnabled() = 0;
	virtual void * BIsShaderBackgroundProcessingEnabled() = 0;
	virtual void EnableShaderManagement( bool ) = 0;
	virtual void EnableShaderBackgroundProcessing( bool ) = 0;
	virtual void * GetShaderDepotsTotalDiskUsage() = 0;
	virtual void StartShaderScan( uint32, char const* ) = 0;
	virtual void StartPipelineBuild( uint32, int32 ) = 0;
	virtual void StartShaderConversion( uint32, uint64, char const* ) = 0;
	virtual void StartShaderPruning() = 0;
	virtual void * ProcessShaderCache( uint32 ) = 0;
	virtual void * GetShaderCacheProcessingCompletion() = 0;
	virtual void * GetShaderCacheProcessingAppID() = 0;
	virtual void SkipShaderProcessing( uint32 ) = 0;
	virtual void * BAppHasPendingShaderContentDownload( uint32 ) = 0;
	virtual void * GetAppPendingShaderDownloadSize( uint32 ) = 0;
	virtual void * GetBucketManifest( uint32, char const*, char const* ) = 0;
};

