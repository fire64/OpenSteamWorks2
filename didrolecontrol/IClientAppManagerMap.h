class IClientAppManagerMap
{
	virtual uint8 LaunchApp( uint32, uint32, const char * ) = 0;
	virtual uint8 ShutdownApp( uint32, bool ) = 0;
	virtual uint32 GetAppState( uint32 ) = 0;
	virtual uint8 InstallApp( uint32, uint8 *, int32 ) = 0;
	virtual uint32 GetAppDir( uint32, char *, uint32 ) = 0;
	virtual uint8 UninstallApp( uint32, bool ) = 0;
	virtual uint32 GetUpdateInfo( uint32, AppUpdateInfo_s * ) = 0;
	virtual uint8 StartDownloadingUpdates( uint32 ) = 0;
	virtual uint8 StopDownloadingUpdates( uint32, bool ) = 0;
	virtual uint8 ApplyUpdate( uint32 ) = 0;
	virtual uint8 VerifyApp( uint32 ) = 0;
	virtual uint8 GetFileInfo( uint32, const char *, uint64 *, uint32 * ) = 0;
	virtual uint8 SetAppConfig( uint32, uint8 *, int32 ) = 0;
	virtual uint8 BIsAppUpToDate( uint32 ) = 0;
};

